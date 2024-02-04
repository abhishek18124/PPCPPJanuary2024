#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter the value of n : ";
	cin >> n;

	if (n == 0 || n == 1) {
		// n is part of the fibonacci sequence
		cout << "true" << endl;
	} else {

		int a = 0; // to store the 0th fib. no.
		int b = 1; // to store the 1st fib. no.

		while (true) {

			int c = a + b;

			if (c == n) {
				cout << "true" << endl;
				break;
			}

			if (c > n) {
				cout << "false" << endl;
				break;
			}

			// c < n
			a = b;
			b = c;
		}

	}

	return 0;
}