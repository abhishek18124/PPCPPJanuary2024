#include<iostream>

using namespace std;

void mySwap(int& x, int& y) {

	int temp = x;
	x = y;
	y = temp;

}

int main() {

	int a = 2;
	int b = 3;

	cout << "inside main(), before mySwap() a = " << a << " b = " << b << endl;

	mySwap(a, b);

	cout << "inside main(), after mySwap() a = " << a << " b = " << b << endl;

	return 0;
}