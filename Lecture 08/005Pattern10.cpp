#include<iostream>

using namespace std;

int main() {

	int n = 9;

	int m = n - n / 2;

	// 1. print upper-part of the pattern

	for (int i = 1; i <= m; i++) {

		// for the ith row of the 1st part print i stars

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		cout << endl;

	}

	// 2. print lower-part of the pattern

	for (int i = 1; i <= m - 1; i++) {

		// for the ith row of the 2nd part print m-i stars

		for (int j = 1; j <= m - i; j++) {
			cout << "*";
		}

		cout << endl;

	}

	return 0;
}