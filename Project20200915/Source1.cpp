

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

	int* ax = new int[N];

	for (int i = 0; i < N; ++i)
		//*(ax + i) = *(p + i);
		ax[i] = p[i];

	//for (auto e : ax)
	//	std::cout << "e =  " << e << std::endl;



	return ax;
}