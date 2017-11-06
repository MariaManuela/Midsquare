#include "MidSquare.h"
#include "LCG.h"
#include "Evaluator.h"
#include "RandGenerator.h"
#include "Poisson.h"
#include "Binomial.h"
#include <iostream>


using namespace std;

int main()
{
	RandGenerator *gen = new MidSquare(82);
	MidSquare y(1200);
	LCG z(27, 17, 43, 100);
	
	Binomial a(10, 0.5);

	cout << "Midsquare:";
	for (int i = 0; i < 10; i++) {
		y.Show();
		y.generate();
	}

	cout << "\n";

	for (int i = 0; i < 2; i++) {
		std::cout << Evaluator(gen).evaluate() << std::endl;
	}
	cout << "\n";

	cout << "LCG: ";
	for (int i = 0; i < 3; i++) {
		z.Show();
		z.generate();
	}

	Poisson x(100,2);
	cout << "Poisson: ";
	std::cout<<x.generate();
	
	cout << "\n";
	
	

	cout << "Binomial: ";
	std::cout<<a.generate();
	cout << "\n";
	


	return 0;

	


	
}