#include "LCG.h"
#include<iostream>
#include <iomanip>

using namespace std;

LCG::LCG(long z,int a, int c,int m)
{
	seed = z;
	m_const = a;
	inc = c;
	modul = m;
}


LCG::~LCG()
{
}

float LCG::generate()
{
	int u;

	
	
		if (inc != 0)
		{
			seed = (m_const * seed + inc) % modul;
		}
		else
		{
			seed = seed / modul;
		}
		
		u = seed / modul;

		return seed;

	/*	std::cout << std::fixed;
		std::cout << std::setprecision(4);
		std::cout << seed;
		cout << "\n";*/
}

void LCG::Show()
{
	std::cout << seed << std::endl;
}

float LCG::Get()
{
	return seed;
}




