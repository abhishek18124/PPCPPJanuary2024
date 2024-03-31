#include<iostream>

using namespace std;

int* f1() {
	int x = 10;
	return &x;
}

int* f2() {
	int* xptr = new int;
	*xptr = 10;
	return xptr;
}

int main() {

	// int* xptr = f1();

	// cout << *xptr << endl; // undefined behaviour since xptr is a dangling pointer

	int* xptr = f2();
	cout << *xptr << endl; // works since xptr is pointing to a memory on the heap which exist even after call to f2() completes

	return 0;
}