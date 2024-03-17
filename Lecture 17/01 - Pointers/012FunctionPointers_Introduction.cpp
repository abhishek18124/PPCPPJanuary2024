#include<iostream>

using namespace std;

void greet() {
	cout << "namaste" << endl;
}

int add(int a, int b) {
	return a + b;
}

bool ascending(int a, int b) {
	return a > b; // return true if a > b otherwise return false
}

int main() {

	cout << (void*)&greet << " " << (void*)greet << endl;
	cout << (void*)&add << " " << (void*)add << endl;
	cout << (void*)&ascending << " " << (void*)ascending << endl;

	void (*gptr)() = &greet; // or greet

	greet();
	(*gptr)();
	gptr();

	int (*aptr)(int, int) = &add; // or add

	cout << add(2, 3) << endl;
	cout << (*aptr)(2, 3) << endl;
	cout << aptr(2, 3) << endl;

	bool (*ascptr)(int, int) = &ascending; // or ascending

	cout << ascending(2, 3) << endl;
	cout << (*ascptr)(2, 3) << endl;
	cout << ascptr(2, 3) << endl;

	return 0;
}