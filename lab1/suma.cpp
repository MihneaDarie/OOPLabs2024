#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

using namespace std;

FILE* fis;

int lungime(char a[500])
{
	int i = 0;
	while (a[i] != '\0')
		i++;
	return i;
}

int convert(char a[500])
{
	int nr = 0;
	int i;
	for (i = 0; i < lungime(a); i++)
	{
		nr = nr * 10 + (a[i] - 48);
	}
	return nr;
}

int main()
{
	fis = fopen("in.txt", "r");
	char sir[500];
	int s = 0;
	while (fgets(sir, 500, fis))
	{
		int lg = lungime(sir);
		if (sir[lg - 1] == '\n') sir[lg - 1] = 0;
		s += convert(sir);
	}
	printf("%d", s);
	return 0;
}
