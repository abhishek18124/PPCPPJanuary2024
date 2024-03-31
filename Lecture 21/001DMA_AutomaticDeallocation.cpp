#include<iostream>

using namespace std;

int* f() {
	int x = 10;
	return &x;
}

int main() {

	int* xptr = f();

	return 0;
}