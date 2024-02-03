#include<iostream>

using namespace std;

int x = 100; // global variable

int main() {

	cout << x << endl;

	int x = 10;

	cout << x << endl;

	{

		int x = 30;
		int y = 20;

		cout << x << " " << y << endl;

	}

	cout << x << endl;

	return 0;
}
