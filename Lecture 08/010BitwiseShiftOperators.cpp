#include<iostream>

using namespace std;

int main() {

	int a = 1;

	cout << "a << 1 = " << (a << 1) << endl;
	cout << "a << 2 = " << (a << 2) << endl;
	cout << "a << 3 = " << (a << 3) << endl << endl;

	a = 8;

	cout << "a >> 1 = " << (a >> 1) << endl;
	cout << "a >> 2 = " << (a >> 2) << endl;
	cout << "a >> 3 = " << (a >> 3) << endl << endl;

	return 0;
}