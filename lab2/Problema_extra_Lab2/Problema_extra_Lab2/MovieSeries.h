#pragma once
#include "Movie.h"

class MovieSeries
{public:
	Movie List[17];
	int count;

	void init();
	void add(Movie* ep);
	void print();
	void sort();
};

