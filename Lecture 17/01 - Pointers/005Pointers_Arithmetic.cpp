#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int* xptr = &x;

	cout << "xptr = " << xptr << endl;

	xptr++; // xptr = xptr + 1 => xptr + 1 * sizeof(int) => xptr + 4

	cout << "xptr = " << xptr << endl;

	double y = 3.14;
	double* yptr = &y;

	cout << "yptr = " << yptr << endl;

	yptr = yptr + 2;

	cout << "yptr = " << yptr << endl;

	return 0;
}