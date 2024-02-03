#include<iostream>

using namespace std;

int main() {

	int x = 10;
	int y = 40;

	cout << x << " " << y << endl;

	{

		int x = 30;
		int y = 20;

		cout << x << " " << y << endl;

	}

	cout << x << " " << y << endl;

	return 0;
}
