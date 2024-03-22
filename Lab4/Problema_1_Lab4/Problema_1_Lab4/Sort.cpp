#include "Sort.h"


/*// add data members
public:
    // add constuctors
    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);*/

Sort::Sort(int c, int a, int b)
{
    count = c;
    int mini = a;
    int maxi = b;

    vec = new int[c + 1];

    time_t t;
    srand(unsigned(time(&t)));
    for (int i = 0; i < count; i++)
        vec[i] = mini + rand() % (maxi - mini + 1);

}

Sort::Sort(int* a, int n)
{
    count = n;
    
    vec = new int[count + 1];

    for (int i = 0; i < count; i++)
        vec[i] = a[i];
}


Sort::Sort() : vec(new int [6] {50, 25, 21, 76, 26, 86})
{
    count = 6;
}

Sort::Sort(int c, ...)
{
    count = c;
    vec = new int[c + 1];
    va_list list;
    va_start(list, c);
    for (int i = 0; i < c; i++)
        vec[i] = va_arg(list, int);
    va_end(list);
}

Sort::Sort(const char* c)
{
    int i = 0,nr=0;

    for (i = 0; c[i] != '\0'; i++)
        if (c[i] == ',')
            nr++;
    nr++;

    count = nr;
    vec = new int[count + 1];

    int k = 0; nr = 0; i = 0;
    while (c[i] != '\0')
    {
        if (c[i] != ',')
            nr = nr * 10 + (c[i] - '0');
        if (c[i] == ',')
        {
            vec[k++] = nr;
            nr = 0;
        }
        i++;
    }
    vec[k++] = nr;
}

int Sort::GetElementFromIndex(int i)
{
    return vec[i - 1];
}

int Sort::GetElementsCount()
{
    return count;
}

void Sort::InsertSort(bool ascendent)
{
    for (int i = 1; i < count; i++) 
{
        int pivot = vec[i];
        int j = i - 1;

        while(ascendent == 1 && j >= 0 && vec[j] > pivot ||
              ascendent == 0 && j >= 0 && vec[j] < pivot)
            {
                vec[j + 1] = vec[j];
                j = j - 1;
            }
        vec[j + 1] = pivot;
    }
}

int pivotare(int st, int dr,int* a,bool ascendent)
{
    int i = st, j = dr, pasi = 0, pasj = 1, aux;
    while (i < j)
    {
        if (ascendent == 1 && a[i] > a[j] ||
            ascendent == 0 && a[i] < a[j])
        {
            aux = a[i];
            a[i] = a[j];
            a[j] = aux;

            aux = pasi;
            pasi = pasj;
            pasj = aux;
        }
        i = i + pasi;
        j = j - pasj;
    }
    return i;
}

void Quick(int st, int dr,int* a,bool ascendent)
{
    if (st < dr)
    {
        int p = pivotare(st, dr,a,ascendent);
        Quick(st, p - 1,a,ascendent);
        Quick(p + 1, dr,a,ascendent);
    }
}

void Sort::QuickSort(bool ascendent)
{
    Quick(0, count - 1, vec, ascendent);
}

void Sort::BubbleSort(bool ascendent)
{
    bool ok = 0;
    while (ok == 0)
    {
        ok = 1;
        for(int i=0;i<count-1;i++)
            if (ascendent == 1 && vec[i] > vec[i + 1] ||
                ascendent == 0 && vec[i] < vec[i + 1])
            {
                int aux = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = aux;
                ok = 0;
            }
    }
}

void Sort::Print()
{
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
        printf("%d ", vec[i]);
    printf("\n");
}