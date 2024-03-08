#include "MovieSeries.h"
#include <stdio.h>

void MovieSeries::init()
{
	this->count = 0;
}

void MovieSeries::add(Movie* ep)
{
	if (this->count <  15)
	{
		char nume[256];
		ep->get_name(nume);
		this->List[this->count].set_name(nume);
		this->List[this->count].set_score(ep->get_score());
		this->List[this->count].set_length(ep->get_length());
		this->List[this->count].set_year(ep->get_year());
		this->count++;
	}
}

void MovieSeries::print()
{
	for (int i = 0; i < this->count; i++)
	{
		char nume[256];
		this->List[i].get_name(nume);
		printf("Name-%s, IMDB Score:%.1f, Length:%d, Release Year:%d;\n", nume, this->List[i].get_score(), this->List[i].get_length(), this->List[i].get_year());
	}
}

void COPY(Movie* m1, Movie m2)
{	
	char nume[256];
	m2.get_name(nume);
	m1->set_name(nume);

	m1->set_score(m2.get_score());
	m1->set_year(m2.get_year());
	m1->set_length(m2.get_length());

}

void MovieSeries::sort()
{
	bool ok = 0;
	while (ok == 0)
	{
		ok = 1;
		for (int i = 0; i < this->count - 1; i++)
			if (this->List[i].GetYears() < this->List[i+1].GetYears())
			{
				Movie aux;
				
				COPY(&aux, this->List[i]);
				COPY(&this->List[i], this->List[i+1]);
				COPY(&this->List[i+1], aux);
				
				ok = 0;
			}
	}
}
