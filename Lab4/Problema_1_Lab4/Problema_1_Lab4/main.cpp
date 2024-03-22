#include "Sort.h"
#include <iostream>

using namespace std;

int main()
{	bool ok;
	int lista[] = { 234,65,123,432,134,52,423 };
	Sort a(10, 50, 100);
	Sort b(lista,7);
	Sort c(6,534,123,63,23,12,32);
	Sort d;
	Sort e("123,45,64,5,9,45");
	
	printf("Afisare liste:\n");
	a.Print();
	b.Print();
	c.Print();
	d.Print();
	e.Print();

	printf("Afisari crescatoare:\n");
	ok = 1;

	printf("Afisare liste dupa InsertSort:\n");

	a.InsertSort(ok);
	b.InsertSort(ok);
	c.InsertSort(ok);
	d.InsertSort(ok);
	e.InsertSort(ok);

	a.Print();
	b.Print();
	c.Print();
	d.Print();
	e.Print();

	printf("Afisare liste dupa BubbleSort:\n");

	a.BubbleSort(ok);
	b.BubbleSort(ok);
	c.BubbleSort(ok);
	d.BubbleSort(ok);
	e.BubbleSort(ok);

	a.Print();
	b.Print();
	c.Print();
	d.Print();
	e.Print();
	
	printf("Afisare liste dupa QuickSort:\n");

	a.QuickSort(ok);
	b.QuickSort(ok);
	c.QuickSort(ok);
	d.QuickSort(ok);
	e.QuickSort(ok);

	a.Print();
	b.Print();
	c.Print();
	d.Print();
	e.Print();

	printf("Afisari descrescatoare:\n");
	ok = 0;

	printf("Afisare liste dupa InsertSort:\n");

	a.InsertSort(ok);
	b.InsertSort(ok);
	c.InsertSort(ok);
	d.InsertSort(ok);
	e.InsertSort(ok);

	a.Print();
	b.Print();
	c.Print();
	d.Print();
	e.Print();

	printf("Afisare liste dupa BubbleSort:\n");

	a.BubbleSort(ok);
	b.BubbleSort(ok);
	c.BubbleSort(ok);
	d.BubbleSort(ok);
	e.BubbleSort(ok);

	a.Print();
	b.Print();
	c.Print();
	d.Print();
	e.Print();

	printf("Afisare liste dupa QuickSort:\n");

	a.QuickSort(ok);
	b.QuickSort(ok);
	c.QuickSort(ok);
	d.QuickSort(ok);
	e.QuickSort(ok);

	a.Print();
	b.Print();
	c.Print();
	d.Print();
	e.Print();
	
	printf("%d %d", d.GetElementsCount(),d.GetElementFromIndex(2));
	
	return 0;
}