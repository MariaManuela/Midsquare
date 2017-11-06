#include "Binomial.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;



Binomial::Binomial(int _n, double _p)
{
	n = _n;
	p = _p;
}


Binomial::~Binomial()
{
}


float Binomial::generate()
{
	
	float rand_num;
	srand(time(NULL));
	
	for (int i = 0; i < n ; i++)
	{
		rand_num = ((double)rand()/RAND_MAX);
		if (rand_num < p)
			x++;
	}

	return x/(float)n;

}



