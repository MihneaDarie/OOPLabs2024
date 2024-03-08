#include "Global.h"
#include "Movie.h"
#include <cstring>

int movie_compare_name(Movie m1, Movie m2)
{
	char nume1[256], nume2[256];
	m1.get_name(nume1);
	m2.get_name(nume2);

	return strcmp(nume1, nume2);

}

int movie_compare_year(Movie m1, Movie m2)
{
	int val1, val2;

	val1 = m1.get_year();
	val2 = m2.get_year();

	if (val1 < val2) return -1;
	else if (val1 == val2) return 0;
	else return 1;

}

int movie_compare_score(Movie m1, Movie m2)
{
	double val1, val2;

	val1 = m1.get_score();
	val2 = m2.get_score();

	if (val1 < val2) return -1;
	else if (val1 == val2) return 0;
	else return 1;
}

int movie_compare_length(Movie m1, Movie m2)
{
	int val1, val2;

	val1 = m1.get_length();
	val2 = m2.get_length();

	if (val1 < val2) return -1;
	else if (val1 == val2) return 0;
	else return 1;
}

int movie_compare_passed_years(Movie m1, Movie m2)
{
	int val1, val2;

	val1 = m1.GetYears();
	val2 = m2.GetYears();

	if (val1 < val2) return -1;
	else if (val1 == val2) return 0;
	else return 1;
}