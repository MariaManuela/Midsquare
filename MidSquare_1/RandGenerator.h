#pragma once
class RandGenerator
{
protected:

	long seed;


public:
	RandGenerator(long seed);
	RandGenerator();
	~RandGenerator();

	virtual float generate()= 0 ;
	/*long GetSeed();
	void SetSeed(long x);*/
	
};

