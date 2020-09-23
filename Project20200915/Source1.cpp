

#include "Header.h"


int f1(int i) {

	return i;
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

	int z = *p;

	return &z;
}

