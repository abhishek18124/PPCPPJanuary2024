#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int& y = x;

	y++;

	cout << x << " " << y << endl;

	int z = 20;

	y = z;

	cout << x << " " << y << " " << z << endl;

	return 0;
}