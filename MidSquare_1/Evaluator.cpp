
#define _USE_MATH_DEFINES
#include "Evaluator.h"
#include <stdlib.h>
#include <time.h>
#include <cmath.>
#include <iostream>



using namespace std;


Evaluator::Evaluator(RandGenerator* g)
{
	this->gen = g;
}


Evaluator::~Evaluator()
{
}

float Evaluator::evaluate()
{
	
	double rand_x = 0, rand_y = 0, dist;
	int circle_points = 0, c;
	float error;
	

srand(time(NULL));


	
	
	for (int i = 0; i <10000; i++)
	{
		dist = sqrt(rand_x*rand_x + rand_y*rand_y);
		
	//	pi = (circle_points / square_points)*4;

	//	gen->generate();
		//rand_x =g / pow(10, DigitsCounter(g->seed);
		rand_x=gen->generate();
		rand_y = gen->generate();
	//	rand_y = gen->GetSeed() / pow(10, DigitsCounter(gen->GetSeed()));

		

		if (dist < 1)
	     circle_points++;
		
	}

	error = circle_points / 2500.0;
	return fabs( M_PI - error);

	//cout << "The value of PI is: " << pi * 4;
	//return pi;

}

int Evaluator::DigitsCounter(long seed)
{
	int temp = seed;
	int dig = 0;
	while (seed != 0)
	{
		seed /= 10;
		dig++;
	}
	return dig;
}

