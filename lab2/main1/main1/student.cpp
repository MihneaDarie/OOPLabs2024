#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <cstring>

float student::GetAverageGrade()
{	
	float medie;
	medie = this->EGrade + this->MGrade + this->HGrade;
	medie /= 3;
	return medie;
}

void student::SetFirstName(char a[50])
{	
	strcpy(this->FirstName, a);
}

void student::GetFirstName(char a[50])
{
	strcpy(a, this->FirstName);
}

void student::SetLastName(char a[50])
{	
	strcpy(this->LastName, a);
}

void student::GetLastName(char a[50])
{
	strcpy(a, this->LastName);
}

void student::SetMGrade(float x)
{
	this->MGrade = x;
}

void student::SetHGrade(float x)
{
	this->HGrade = x;
}

void student::SetEGrade(float x)
{
	this->EGrade = x;
}

float student::GetMGrade()
{
	return this->MGrade;
}
float student::GetHGrade()
{
	return this->HGrade;
}
float student::GetEGrade()
{
	return this->EGrade;
}