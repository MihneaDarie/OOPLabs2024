#include "student.h"
#include "Global.h"
#include <stdio.h>

int main()
{	
	student student1,student2;
	
	char b[50] = "David";
	char c[50]= "Aopescu";
	char e[50] = "David";
	char f[50] = "Maria";
	
	student1.SetEGrade(8.0f);
	student1.SetHGrade(7.0f);
	student1.SetMGrade(5.0f);
	student1.SetLastName(b);
	student1.SetFirstName(c);

	student2.SetEGrade(9.0f);
	student2.SetHGrade(7.0f);
	student2.SetMGrade(5.0f);
	student2.SetLastName(e);
	student2.SetFirstName(f);

	printf("%d",CompareName(&student1,&student2));

}