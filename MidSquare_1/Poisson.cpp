
#define _USE_MATH_DEFINES
#include "Poisson.h"
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>


using namespace std;

Poisson::Poisson(int n, float l)
{
	lim_sup = n;
	lambda = l;
}




Poisson::~Poisson()
{
}


float Poisson::generate()
{
	srand(time(NULL));
	k = 0;
	

	double 	L = 1 / pow(M_E, lambda);

		do {

			k++;
			p *= rand() / (float)RAND_MAX;

		} while ((p > L) && (k < lim_sup));

		
		return k - 1;
	

}




