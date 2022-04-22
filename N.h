#pragma once
#include <iostream>

using namespace std;

class N
{
private:
	int size;
	int* vector;
public:
	N(int n = 0)
		: size(n) {
		vector = new int[size];

		for (int i = 0; i < size; i++) {
			vector[i] = 0;
		}
	}

	N(const N& a)
		: size(a.size) {
		vector = new int[size];

		for (int i = 0; i < size; i++) {
			vector[i] = a.vector[i];
		}
	}

	~N() {
		delete[] vector;
	}

	int vectorNorma();

	N& operator = (const N& a);

	int& operator [] (const int i);
	const int& operator [] (const int i) const;

	friend N operator + (N& a, N& b);
	friend bool operator == (N& a, N& b);

	friend ostream& operator << (ostream& out, const N& a);
	friend istream& operator >> (istream& in, const N& a);
};

