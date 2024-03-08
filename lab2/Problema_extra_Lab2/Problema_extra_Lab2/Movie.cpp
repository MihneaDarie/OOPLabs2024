#define _CRT_SECURE_NO_WARNINGS
#include "Movie.h"
#include <cstring>

void Movie::set_name(const char a[256])
{
	strcpy(this->Name, a);
}

void Movie::get_name(char a[256])
{
	strcpy(a, this->Name);
}

void Movie::set_year(int a)
{
	this->ReleaseYear = a;
}

int Movie::get_year()
{	
	return this->ReleaseYear;

}

void Movie::set_score(double a)
{
	this->Score = a;
}

double Movie::get_score()
{
	return this->Score;
}

void Movie::set_length(int a)
{
	this->length = a;
}

int Movie::get_length()
{
	return this->length;
}

int Movie::GetYears()
{
	return 2024 - this->ReleaseYear - 1;
}