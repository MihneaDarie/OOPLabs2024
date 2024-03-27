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

	d={ 1,2,3,4,6 };

	d.Print();

	printf("\n%d", d.GetElementsCount());

	return 0;
}