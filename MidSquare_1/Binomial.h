#pragma once
#include "RandGenerator.h"
class Binomial :public RandGenerator
{
	int n;
	double p;
	float x = 0;

public:
	Binomial(int _n, double _p);
	~Binomial();

	float generate();
	
	
};

