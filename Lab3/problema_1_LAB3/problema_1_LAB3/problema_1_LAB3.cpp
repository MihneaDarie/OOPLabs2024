#include <stdio.h>
#include "Math.h"

int main()
{
	Math s;
	
	printf("37 + 55 = %d\n", s.Add(37, 55));
	printf("37 + 55 + 78 = %d\n", s.Add(37, 55, 78));
	printf("37.06 + 55.564 = %f\n", s.Add(37.06,55.564));
	printf("37.06 + 55.564 + 5.0= %f\n", s.Add(37.06,55.564,5.0));
	
	printf("5 * 6 = %d\n", s.Mul(5,6));
	printf("5 * 6 * 7 = %d\n", s.Mul(5,6,7));
	printf("63.2 * 2.0 = %f\n", s.Mul(63.2,2.0));
	printf("63.2 * 2.0 * 65.6 = %f\n", s.Mul(63.2, 2.0,65.6));
	
	printf("Suma a unui sir de numere este egal cu %d (ex. n=5 si [1,2,3,4,5])\n", s.Add(5,1,2,3,4,5));
	
	printf("Suma a doua numere mari, de exemplu 4235791823981 si 138791299398123 este %s\n", s.Add("4235791823981", "138791299398123"));

}