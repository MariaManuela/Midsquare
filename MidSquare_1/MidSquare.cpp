#include "MidSquare.h"
#include<iostream>
#include <iomanip>


using namespace std;

MidSquare::MidSquare(long y)
{
	this->seed = y;
}


MidSquare::~MidSquare()
{
}

float MidSquare::generate()
{
	long mid;
	int dig = DigitsCounter(seed);
	float r;

	mid = seed*seed / ((int)pow(10, dig / 2));
	mid = mid % (int)pow(10, dig);
	seed = mid;
	r = mid / pow(10, DigitsCounter(mid));
	
	//if (mid == seed)
	//{
	//		
	//	mid += 100;
	//	seed = mid;
	//}
	//else
	//{
	//	seed = mid;
	//}

	
	//std::cout << r;
	//std::cout << std::fixed;
	//std::cout << std::setprecision(4);
	//std::cout << "\n";

	return r;
}

void MidSquare::Show()
{
	std::cout << seed / pow(10, DigitsCounter(seed)) << std::endl;
	
}

int MidSquare::DigitsCounter(int x)
{
	int dig = 0;
	while (x != 0)
	{
		x /= 10;
		dig++;
	}
	return dig;
}

float MidSquare::Get()
{
	return seed / pow(10, DigitsCounter(seed));
}

