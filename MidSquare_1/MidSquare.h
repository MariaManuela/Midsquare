#pragma once
#include "RandGenerator.h"
class MidSquare :public RandGenerator
{


	
public:
	MidSquare(long y);
	~MidSquare();

	float generate();
	void Show();
	int DigitsCounter(int x);
	float Get();
	

};

