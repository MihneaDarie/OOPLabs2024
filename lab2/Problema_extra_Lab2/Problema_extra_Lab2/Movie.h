#pragma once

class Movie
{
	char Name[256];
	int ReleaseYear;
	double Score;
	int length;
public:

	void set_name(const char a[256]);
	void get_name(char a[256]);

	void set_year(int a);
	int get_year();

	void set_score(double x);
	double get_score();

	void set_length(int x);
	int get_length();

	int GetYears();

};

