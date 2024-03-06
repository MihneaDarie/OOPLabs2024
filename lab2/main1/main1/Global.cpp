#include "Global.h"
#include "student.h"
#include <cstring>

int CompareMGrade(student* a, student* b)
{
	float f1 = a->GetMGrade();
	float f2 = b->GetMGrade();

	if (f1 > f2) return -1;
	else if (f1 < f2) return 1;
	return 0;
}

int CompareEGrade(student* a, student* b)
{	
	float f1 = a->GetEGrade();
	float f2 = b->GetEGrade();

	if (f1 > f2) return -1;
	else if (f1 < f2) return 1;
	return 0;
}

int CompareHGrade(student* a, student* b)
{
	float f1 = a->GetHGrade();
	float f2 = b->GetHGrade();

	if (f1 > f2) return -1;
	else if (f1 < f2) return 1;
	return 0;
}

int CompareAverageGrade(student* a, student* b)
{
	float f1 = a->GetAverageGrade();
	float f2 = b->GetAverageGrade();

	if (f1 > f2) return -1;
	else if (f1 < f2) return 1;
	return 0;
}

int CompareName(student* a, student* b)
{
	char nume1[50], nume2[50];
	a->GetLastName(nume1);
	b->GetLastName(nume2);
	
	char prenume1[50], prenume2[50];
	a->GetFirstName(prenume1);
	b->GetFirstName(prenume2);

	int val1, val2;
	val1 = strcmp(nume1, nume2);
	val2 = strcmp(prenume1, prenume2);

	if (val1 == -1) return -1;
	else if (val1 == 1) return 1;
	else if (val1 == 0 && val2 == -1) return -1;
	else if (val1 == 0 && val2 == 1) return 1;
	return 0;

}