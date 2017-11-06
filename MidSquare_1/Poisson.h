#pragma once
#include "RandGenerator.h"
class Poisson :public RandGenerator
{

	float lambda;
	float p = 1.0;
	int lim_sup;
	float k;
public:
	
	Poisson(int n, float l);
	~Poisson();

	 float generate();
	
	 
	
};

