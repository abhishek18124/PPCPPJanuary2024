#include<iostream>

using namespace std;

int main() {

	int n = 9;

	int m = n / 2;

	// 1. print 1st part of the pattern

	for (int i = 1; i <= n; i++) {
		cout << "*";
	}

	cout << endl;

	// 2. print 2nd part of the pattern

	for (int i = 1; i <= m; i++) {

		// for the ith row of the 2nd part print (m-i+1) stars

		for (int j = 1; j <= m - i + 1; j++) {
			cout << "*";
		}

		// followed by 2i-1 spaces

		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << " ";
		}

		// followed by (m-i+1) stars
		for (int j = 1; j <= m - i + 1; j++) {
			cout << "*";
		}

		cout << endl;

	}

	// 3. print 3rd part of the pattern

	for (int i = 1; i <= m - 1; i++) {

		// for the ith row of the 3rd part, print i+1 stars
		for (int j = 1; j <= i + 1; j++) {
			cout << "*";
		}

		// followed by n-2(i+1) or 2(m-i)-1 spaces
		for (int j = 1; j <= n - 2 * (i + 1); j++) {
			cout << " ";
		}

		// followed by i+1 stars
		for (int j = 1; j <= i + 1; j++) {
			cout << "*";
		}

		cout << endl;

	}

	// 4. print 4th part of the pattern


	for (int i = 1; i <= n; i++) {
		cout << "*";
	}

	cout << endl;

	return 0;
}