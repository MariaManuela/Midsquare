#pragma once
#include "RandGenerator.h"
class LCG :public RandGenerator
{
	int m_const, inc, modul;
protected:
	long seed;
	

public:
	LCG(long z,int a,int c,int m);
	~LCG();

	float generate();
	void Show();
	float Get();
//	int recursion();

};

