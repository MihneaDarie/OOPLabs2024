#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdarg.h>
#include <vector>
#include <initializer_list>

class Sort
{
    int count;
    int* vec;
public:
    Sort(int c, int a, int b);
    Sort(int* a,int n);
    Sort(const int list[500]);
    Sort(int c, ...);
    Sort(const char*);
    Sort();
    ///Sort(const std::initializer_list<int>&);
    void InsertSort(bool ascendent);
    void QuickSort(bool ascendent);
    void BubbleSort(bool ascendente);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
    Sort& operator=(std::initializer_list<int>&);
};

