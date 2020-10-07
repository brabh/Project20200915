
#include "Header.h"




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

	//for (auto e : ai)
		//std::cout << "e =  " << e << std::endl;


	int* pa;

	pa = f3(ai, 100);

	//std::vector<int> v0(1000, 0);
	//std::vector<int> v0;

	std::vector<int> v {10,11,12,13,14,15};

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	for(const auto& e : v)
		//std::cout << typeid(e).name() << std::endl;
		std::cout << "ve =  " << e << std::endl;

	for(int i = 0; i < v.size(); ++i)
		std::cout << i << " => " << v[i] << std::endl; // vi.at(i)

	for(std::vector<int>::iterator e = v.begin(); e != v.end(); ++e)
		//std::cout << typeid(e).name() << std::endl;
		std::cout << "ve =  " << *e << std::endl;

	std::sort(v.begin(), v.end(), mySort);

	f4(v);

	for (const auto& e : v)
		std::cout << "sorted e =  " << e << std::endl;

	M m1;
	M* pm = new M[10];// heap
	M am[10];// stack
	std::vector<M> vm;


	delete[] pm;
	return 0;
}






