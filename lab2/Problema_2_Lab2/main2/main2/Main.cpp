#define _CRT_SECURE_NO_WARNINGS
#include "students.h"
#include "Global.h"
#include <stdio.h>
#include <cstring>

int main()
{
	students s1, s2;

	char a[50] = "David";
	char b[50] = "Popescu";
	char c[50] = "Ana";
	char d[50] = "Maria";

	s1.SetEnglishgrade(10.0f);
	s1.SetMathgrade(4.0f);
	s1.SetHistorygrade(2.0f);
	s1.SetFirstName(a);
	s1.SetLastName(b);
	
	s2.SetEnglishgrade(10.0f);
	s2.SetMathgrade(5.0f);
	s2.SetHistorygrade(5.0f);
	s2.SetFirstName(c);
	s2.SetLastName(d);

	printf("Functia va afisa pentru Popescu David si Ana Maria %d\n", CompareName(&s1,&s2)); /// aici compara numele a doi studenti

	strcpy(d, "Popescu");
	s2.SetLastName(d);

	printf("Functia va afisa pentru Popescu David si Popescu Maria %d\n", CompareName(&s1, &s2)); /// aici compara numele a doi studenti avand in vedere cazul in care acestia au acelasi nume de familie

	printf("Primul student are notele M:4 E:10 H:2\n");
	printf("Al doilea student are notele M:5 E:10 H:5\n");

	printf("Functia de comparare a mediilor va returna %d\n", CompareAverageGrade(&s1, &s2));
	printf("Functia de comparare a notelor la engleza va returna %d\n", CompareEGrade(&s1, &s2));
	printf("Functia de comparare a notelor la matematica va returna %d\n", CompareMGrade(&s1, &s2));
	printf("Functia de comparare a notelor la istorie va returna %d\n", CompareHGrade(&s1, &s2));


}