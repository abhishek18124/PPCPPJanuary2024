#include<iostream>

using namespace std;

int main() {

	int a;
	cout << "Enter the first number : ";
	cin >> a;

	int b;
	cout << "Enter the second number : ";
	cin >> b;

	int c;
	cout << "Enter the third number : ";
	cin >> c;

	if (a > b and a > c) {
		cout << a << endl;
	} else {
		// a cannot be the largest of three numbers

		// your answer is either b or c

		if (b > c) {
			cout << b << endl;
		} else {
			cout << c << endl;
		}
	}


	return 0;
}