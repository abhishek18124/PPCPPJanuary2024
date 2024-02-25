#include<iostream>

using namespace std;

// name of the parameter and argument can differ

int multiply(int a, int b) {
	a++; b++;
	cout << "inside multiply after ++ a = " << a << " b = " << b << endl;
	int c = a * b;
	return c;
}

int main() {

	int a = 5;
	int b = 6;

	cout << "inside main(), before multiply() a = " << a << " b = " << b << endl;

	cout << multiply(a, b) << endl;

	cout << "inside main(), after multiply() a = " << a << " b = " << b << endl;


	return 0;
}