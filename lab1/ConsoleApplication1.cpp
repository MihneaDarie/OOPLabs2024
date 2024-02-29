#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <stdio.h>

using namespace std;

int lungime(char a[500])
{
	int i = 0;
	while (a[i] != '\0')
		i++;
	return i;
}

int compare(char a[500], char b[500])
{
	int rez = 0, ct = 0;
	int lg;
	int lga = lungime(a);
	int lgb = lungime(b);

	if (lga > lgb) lg = lgb;
	else lg = lga;

	int i;
	for (i = 0; i < lg; i++)
	{
		if (a[i] < b[i]) rez = -1;
		else if(a[i]>b[i])rez = 1;
	}

	if (rez == 0 && lga == lgb) return 0;
	else if (rez == 0 && lga < lgb) return -1;
	else if (rez == 0 && lga > lgb) return 1;

	return rez;
}

void CopyTilSpace(char in[500],char out[500],int i)
{
	int k = 0;
	while (in[i] != '\0' && in[i] != ' ')
		out[k++] = in[i++];
	out[k] = 0;
}

void sorting(char a[500][500], int n)
{
	bool ok=0;
	int lga, lgb;
	while (ok == 0)
	{
		ok = 1;
		for (int i = 0; i < n - 1; i++)
		{
			lga = lungime(a[i]);
			lgb = lungime(a[i + 1]);
			if (lga < lgb ||
				lga==lgb && compare(a[i], a[i+1])<0)
			 {
				char aux[500];
				CopyTilSpace(a[i], aux, 0);
				CopyTilSpace(a[i + 1], a[i], 0);
				CopyTilSpace(aux, a[i+1], 0);
				ok = 0;
			 }
		}
	}
}

void writing(char a[500][500], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%s\n", a[i]);
}

int main()
{
	char sir[500], a[500][500];
	int i,k=0;
	
	scanf("%[^\n]s", sir);
	i = 0;
	if (sir[i] != ' ')
		CopyTilSpace(sir, a[k++], i);
	
	i++;
	while (sir[i] != '\0')
	{
		if (sir[i] != ' ' && sir[i - 1] == ' ')
			CopyTilSpace(sir, a[k++], i);
		i++;
	}

	sorting(a, k);
	writing(a, k);

	return 0;
}