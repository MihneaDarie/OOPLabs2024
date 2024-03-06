#include "global.h"
#include <cstring>

int CompareEGrade(students* a, students* b)
{	
	float f1, f2;
	f1 = a->GetEnglishGrade();
	f2 = b->GetEnglishGrade();

	if (f1 > f2) return -1;
	else if (f1 < f2) return 1;
	return 0;

}
int CompareMGrade(students* a, students* b)
{
	float f1, f2;
	f1 = a->GetMathGrade();
	f2 = b->GetMathGrade();

	if (f1 > f2) return -1;
	else if (f1 < f2) return 1;
	return 0;
}
int CompareHGrade(students* a, students* b)
{
	float f1, f2;
	f1 = a->GetHistoryGrade();
	f2 = b->GetHistoryGrade();

	if (f1 > f2) return -1;
	else if (f1 < f2) return 1;
	return 0;
}
int CompareAverageGrade(students* a, students* b)
{
	float f1, f2;
	f1 = a->GetAverageGrade();
	f2 = b->GetAverageGrade();

	if (f1 > f2) return -1;
	else if (f1 < f2) return 1;
	return 0;
}
int CompareName(students* a, students* b)
{
	char nume1[50], nume2[50];
	a->GetLastName(nume1);
	b->GetLastName(nume2);
	
	char prenume1[50], prenume2[50];
	a->GetLastName(prenume1);
	b->GetLastName(prenume2);

	int val1 = strcmp(nume1, nume2);
	int val2 = strcmp(prenume1, prenume2);

	if (val1 == -1) return -1;
	else if (val1 == 1) return 1;
	else if (val1 == 0 && val2 == -1) return -1;
	else if (val1 == 0 && val2 == 1) return 1;
	return 0;


}