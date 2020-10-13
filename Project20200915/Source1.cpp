

#include "Header.h"


int f1(int i) {

	int z = i;

	return z;
}


int f1(int i, int j) {


	return i + j; // RVO
}

int f1(int i, int j, int k, int m, int n) {

	return i + j + k + m + n;
}


int f1(int* p) {

	return *p;
}


int* f2(int* p) {

	//int z = *p; // Dangling reference

	int* z = new int;

	*z = *p;

	return z; 
}


int* f3(int* p, int N) {

	//int ax[100];

	int* ax = new int[N]; // malloc, free

	for (int i = 0; i < N; ++i)
		//*(ax + i) = *(p + i);
		ax[i] = p[i];

	//for (auto e : ax)
	//	std::cout << "e =  " << e << std::endl;

	return ax;
}


bool mySort(const int& i1, const int& i2) {

	return i1 < i2;
}


std::vector<int> f4(std::vector<int>& w) {

	w.push_back(100);
	w.push_back(101);
	w.push_back(102);

	return w;
}

M::M() { std::cout << "Hello from default konstruktor" << std::endl; }

M::M(int i, double d, std::string s) : i{ i }, d{ d }, s{ s } {
	//this->i = i; veraltet
}

M::M(const M& r) : i{ r.i }, d{ r.d }, s{ s } {}

M& M::operator=(const M& r){
	this->i = r.i;
	this->d = r.d;
	this->s = r.s;

	return *this;
}


M::~M(){ std::cout << "default destruktor" << std::endl; }
