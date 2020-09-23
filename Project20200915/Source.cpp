
#include "Header.h"
#include <iostream>



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



	return 0;
}






