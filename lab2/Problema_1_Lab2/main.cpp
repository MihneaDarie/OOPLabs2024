#include "NumberList.h"

int main()
{	
	int i = 0;
	NumberList nr;
	nr.Init();
	for (i = 0; i < 10; i++)
		nr.Add(rand() % 50);
	nr.Sort();
	nr.Print();
}