#pragma once
#include <cstring>

void Separare(char nume[50], char prenume[50], char FullName[50])
{
	int i = 0, k = 0;
	while (FullName[i] != ' ')
		nume[k++] = FullName[i++];
	nume[k] = 0;
	k = 0;
	while (FullName[i] != '\0')
		prenume[k++] = FullName[i++];
}

int CompareNames(char nume1[50], char nume2[50])
{
	char prenumeI[50], numeI[50];
	char prenumeII[50], numeII[50];

	Separare(numeI, prenumeI, nume1);
	Separare(numeII, prenumeII, nume2);

	int valN = strcmp(numeI, numeII); //pentru a nu calcula de mai multe ori strcmp
	int valP = strcmp(prenumeI, prenumeII);

	if (valN < 0) return 1;
	else if (valN > 0) return -1;
		 else if (valN == 0 && valP < 0) return 1;
			else if (valN == 0 && valP > 0) return -1;
	return 1;//daca numele sunt lfl va returna 1
}


int CompareMath(float n1, float n2)
{	
	if (n1 > n2) return -1;
	return 1;
}


int CompareEnglish(float n1, float n2)
{
	if (n1 > n2) return -1;
	return 1;
}

int CompareHistory(float n1, float n2)
{
	if (n1 > n2) return -1;
	return 1;
}

int CompareAverage(float n1, float n2)
{
	if (n1 > n2) return -1;
	return 1;
}