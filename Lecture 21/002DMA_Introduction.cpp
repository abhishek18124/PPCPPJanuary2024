#include<iostream>

using namespace std;

int main() {

	int* ptr = new int;

	*ptr = 50;

	cout << *ptr << endl;

	delete ptr;

	ptr = new int;

	*ptr = 60;

	cout << *ptr << endl;

	char* chptr = new char;

	*chptr = 'A';

	cout << *chptr << endl;

	double* dptr = new double;

	*dptr = 3.14;

	cout << *dptr << endl;

	return 0;
}