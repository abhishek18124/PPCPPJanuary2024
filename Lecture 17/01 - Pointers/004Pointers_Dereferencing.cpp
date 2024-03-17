#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int *xptr = &x;

	cout << "x = " << x << endl; // 10
	cout << "sizeof(x) = " << sizeof(x) << endl; // 4B
	cout << "xptr = " << xptr << endl; // hexa
	cout << "sizeof(xptr) = " << sizeof(xptr) << endl; // 4B or 8B
	cout << "*xptr = " << *xptr << endl; // 10

	double y = 3.14;
	double *yptr = &y;

	cout << "y = " << y << endl; // 3.14
	cout << "sizeof(y) = " << sizeof(y) << endl; // 8B
	cout << "yptr = " << yptr << endl; // hexa
	cout << "sizeof(yptr) = " << sizeof(yptr) << endl; // 4B or 8B
	cout << "*yptr = " << *yptr << endl; // 3.14

	return 0;
}