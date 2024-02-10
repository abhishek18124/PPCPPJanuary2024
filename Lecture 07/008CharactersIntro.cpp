#include<iostream>

using namespace std;

int main() {


	char ch = 'A';

	cout << ch << endl;
	cout << (int)ch << endl; // explicit type-casting

	int x = 'b'; // implicit type-casting

	cout << x << endl;
	cout << (char)x << endl;

	ch = '#';

	cout << ch << endl;
	cout << (int)ch << endl;

	char c = '7';
	cout << c << endl;
	cout << (int)c << endl;

	cout << '7' - '0' << endl;

	char d = 35;
	cout << d << endl;

	return 0;
}