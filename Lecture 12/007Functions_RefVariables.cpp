#include<iostream>

using namespace std;


int main() {

	int a = 10;
	int b = a;

	b++;

	cout << a << " " << b << endl;

	int x = 100;
	int& y = x;

	y++;

	cout << x << " " << y << endl;

	return 0;
}