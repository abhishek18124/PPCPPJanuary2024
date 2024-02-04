#include<iostream>

using namespace std;

int main() {

	int x = 10;

	x++; // or ++x

	cout << "x : " << x << endl;

	int y = 20;

	y--; // or --y

	cout << "y : " << y << endl;

	int z = 100;

	cout << z++ << endl;
	cout << z << endl;

	int w = 60;
	cout << ++w << endl;
	cout << w << endl;

	return 0;
}