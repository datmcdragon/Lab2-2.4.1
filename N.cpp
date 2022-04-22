#include "N.h"

using namespace std;

int N::vectorNorma() {
	int max = vector[0], min = vector[0];
	for (int i = 1; i < size; i++) {
		if (vector[i] > max) {
			max = vector[i];
		}
		if (vector[i] < min) {
			min = vector[i];
		}
	}
	return abs(max - min);
}

N& N::operator = (const N& a) {
	if (&a == this) return *this;

	size = a.size;

	delete[] vector;
	vector = new int[size];

	for (int i = 0; i < size; i++) {
		vector[i] = a.vector[i];
	}

	return *this;
}

int& N::operator [] (const int i) {
	return vector[i];
}

const int& N::operator [] (const int i) const {
	return vector[i];
}

N operator + (N& a, N& b) {
	if (a.size != b.size) {
		return N();
	}

	N c(a.size);
	for (int i = 0; i < a.size; i++) {
		c[i] = a[i] + b[i];
	}
	return N(c);
}

bool operator == (N& a, N& b) {
	if (a.size != b.size) {
		return false;
	}

	N c(a.size);
	for (int i = 0; i < a.size; i++) {
		if (a[i] == b[i]) {
			continue;
		}
		else {
			return false;
		}
	}
	return true;
}

ostream& operator << (ostream& out, const N& a) {
	out << "vector[ ";
	for (int i = 0; i < a.size; i++) {
		out << a.vector[i] << ", ";
	}
	out << "]" << endl;

	return out;
}

istream& operator >> (istream& in, const N& a) {
	cout << "vector[ ";
	for (int i = 0; i < a.size; i++) {
		in >> a.vector[i];
		cout << ", ";
	}
	cout << "]" << endl;

	return in;
}
