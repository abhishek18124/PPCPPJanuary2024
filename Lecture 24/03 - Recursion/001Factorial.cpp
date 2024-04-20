#include<iostream>

using namespace std;

int f(int n) {

	// base case

	if (n == 0) {

		// find 0!

		return 1;

	}

	// recursive case

	// find n!

	// 1. ask your friend to find n-1!

	int A = f(n - 1);

	return n * A;

}

int main() {

	int n = 5;

	cout << f(n) << endl;

	return 0;
}