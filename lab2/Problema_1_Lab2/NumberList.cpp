#include "NumberList.h"
#include <stdio.h>
#include <cstdlib>


    void NumberList::Init()
    {
        this->count = 0;
}
    
    bool NumberList::Add(int x)
    {   
        if (this->count >= 10) return 0;
        this->numbers[this->count++] = x;
        return 1;
    }

    void NumberList::Sort()
    {   
        bool ok = 0;
        while (ok == 0)
        {
            ok = 1;
            for(int i=0;i<this->count-1;i++)
                if (this->numbers[i] > this->numbers[i + 1])
                {
                    int aux;
                    aux = this->numbers[i];
                    this->numbers[i] = this->numbers[i + 1];
                    this->numbers[i + 1] = aux;
                    ok = 0;
                }
        }
    }

    void NumberList::Print()
    {
        for (int i = 0; i < this->count; i++)
            printf("%d ", this->numbers[i]);
    }