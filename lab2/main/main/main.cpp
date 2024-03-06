#include "Students.h"
#include <stdio.h>

int main()
{
	Students a, b, c;
	char num[50] = "David Popescu";
	a.SetName(num);
	a.SetMathGrade(10.0f);
	a.SetHistoryGrade(7.0f);
	a.SetEnglishGrade(5.0f);
	
	char numele[50];

	printf("%f", a.GetMathGrade());

	return 0;

}