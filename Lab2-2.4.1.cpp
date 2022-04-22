#include <iostream>
#include "N.h"

using namespace std;

int main()
{
	N a(4);
	N b(4);

	cin >> a;
	cin >> b;

	N c;

	if (a == b)
		c = a + b;

	cout << c << endl;

	cout << a.vectorNorma() << endl;

	system("pause");
}
