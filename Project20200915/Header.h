//#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int f1(int);
int f1(int i, int j);
int f1(int i, int j, int k, int m = 0, int n = 0);
int f1(int*);

int* f2(int*);

int* f3(int* p, int N);
bool mySort(const int& i1, const int& i2);

std::vector<int> f4(std::vector<int>& );

class M {
public:
	int i;
	double d;
	std::string s;

	M();

};

