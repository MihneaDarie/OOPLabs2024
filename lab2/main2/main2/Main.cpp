#include "students.h"
#include "Global.h"
#include <stdio.h>

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

	printf("%d", CompareAverageGrade(&s1,&s2));

}