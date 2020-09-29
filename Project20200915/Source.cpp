
#include "Header.h"

#include <vector>


int main() {
	int x;
	int y = 7;


	int* q;
	q = &y;

	q = f2(q);









	x = f1(y);

	std::cout << x << std::endl;

	x = f1(7, 7);

	std::cout << x << std::endl;

	x = f1(7, 7, 7);

	std::cout << x << std::endl;

	x = 7;

	int* p;
	p = &x;

	x = f1(p);

	std::cout << "x = f1(p); => " << x << std::endl;

	std::cout << "q = " << q << " *q = " << *q << std::endl;


	int* p2;
	int ri;

	for (int i = 0; i < 1000; ++i) { 
		p2 = f2(p);
		//std::cout << "p2 = " << p2 << " *p2 = " << *p2 << std::endl;
		delete[] p2;
	}

	for (int i = 0; i < 1000; ++i) { // einfach copy der Parameter
		ri = f1(p);
		//std::cout << "*ri = " << &ri << " ri = " << ri << std::endl;
		//delete[] p2;
	}


	const int N = 100;
	int ai[N];
	for (int i = 0; i < N; ++i)
		ai[i] = 0;

	for (auto e : ai)
		std::cout << "e =  " << e << std::endl;


	int* pa;

	pa = f3(ai, 100);




	std::vector<int> v;



	return 0;
}






