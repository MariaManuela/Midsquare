
#include "RandGenerator.h"
#include <iostream>
class Evaluator 
{

	RandGenerator* gen;

public:
	Evaluator(RandGenerator* g);

	~Evaluator();

	float evaluate();
	int DigitsCounter(long seed);
	
	
};

