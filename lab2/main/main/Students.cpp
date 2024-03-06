#include "Students.h"
#include <cstring>

void Copy( char in[500], char out[500])
{
	int i = 0;
	while (in[i] != '\0')
		out[i] = in[i++];
	out[i] = 0;
}

float Students::GetAverageGrade()
{
	float medie;
	medie = this->MathGrade + this->EnglishGrade + this->HistoryGrade;
	return medie;
}

void Students::SetName(char nume[50])
{
	Copy(this->name, nume);
}

void Students::GetName(char nume[50])
{
	Copy(nume, this->name);
}

void Students::SetMathGrade(float x)
{
	this->MathGrade = x;
}

float Students::GetMathGrade()
{
	return this->MathGrade;
}

void Students::SetEnglishGrade(float x)
{
	this->EnglishGrade=x;
}

float Students::GetEnglishGrade()
{
	return this->EnglishGrade;
}

void Students::SetHistoryGrade(float x)
{
	this->HistoryGrade = x;
}

float Students::GetHistoryGrade()
{
	return this->HistoryGrade;
}