#define _CRT_SECURE_NO_WARNINGS
#include "students.h"
#include <cstring>

void students::SetFirstName(char a[50])
{
	strcpy(this->FirstName, a);
}
void students::SetLastName(char a[50])
{
	strcpy(this->LastName, a);
}

void students::GetFirstName(char a[50])
{
	strcpy(a, this->FirstName);
}
void students::GetLastName(char a[50])
{
	strcpy(a, this->LastName);
}

void students::SetMathgrade(float x)
{
	this->MathGrade = x;
}

void students::SetEnglishgrade(float x)
{
	this->EnglishGrade = x;
}
void students::SetHistorygrade(float x)
{
	this->HistoryGrade = x;
}

float students::GetMathGrade()
{
	return this->MathGrade;
}
float students::GetEnglishGrade()
{
	return this->EnglishGrade;
}
float students::GetHistoryGrade()
{
	return this->HistoryGrade;
}

float students::GetAverageGrade()
{
	float medie;
	medie = this->MathGrade + this->EnglishGrade + this->HistoryGrade;
	medie /= 3;
	return medie;
}