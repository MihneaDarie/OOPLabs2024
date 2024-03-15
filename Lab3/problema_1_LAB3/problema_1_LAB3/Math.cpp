#define _CRT_SECURE_NO_WARNINGS 
#include "Math.h"
#include <stdarg.h>
#include <cstring>

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b,int c)
{
	return a + b + c;
}

double Math::Add(double a, double b)
{
	return a + b;
}
double Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b,int c)
{
	return a * b * c;
}

double Math::Mul(double a, double b)
{
	return a * b;
}

double Math::Mul(double a, double b,double c)
{
	return a * b * c;
}

int Math::Add(int count, ...)
{
	int s = 0;
	va_list l;
	int val;
	va_start(l, count);
	for (int i = 0; i < count; i++)
	{
		val = va_arg(l, int);
		s += val;
	}
	va_end(l);
	return s;
}

char* Math::Add(const char* a, const char* b)
{
	char* rez; int maxi;
	if (a == nullptr || b == nullptr)
		return nullptr;
	else
	{
		maxi = strlen(a);
		int m = strlen(b);
		if (maxi < m) maxi = m;
		rez = new char[maxi+1];
	}
	
	for (int i = 0; i <= maxi; i++)
		rez[i] = '0';
	rez[maxi + 1] = 0;
	int i=strlen(a)-1, j=strlen(b)-1;
	int carry=0;
	int k;
	
	for ( k = maxi; k >= 0 && i>=0 && j>=0; k--)
	{
		int s = carry;
		s += (a[i--] + b[j--] - 2 * 48);
		rez[k] = s % 10 + 48;
		carry = s / 10;
	}
	
	while (i>=0)
	{
		int s = carry + (a[i--]-48);
		rez[k--] = s % 10 + 48;
		carry = s / 10;
	}
	while (j>=0)
	{
		int s = carry + (b[j--]-48);
		rez[k--] = s % 10 + 48;
		carry = s / 10;
	}

	rez[0] = carry + 48;

	if (rez[0] == '0') strcpy(rez, rez + 1);
	
	return rez;

}
