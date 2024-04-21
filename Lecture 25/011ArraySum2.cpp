#include<iostream>

using namespace std;

int f(int x[], int n, int i) {

	// base case

	if (i == n) {

		// find the sum of x[n..n-1] = {}

		return 0;

	}

	// recursive case

	// find the sum of x[i...n-1]

	// 1. ask your friend to find the sum of x[i+1...n-1]

	int A = f(x, n, i + 1);

	return x[i] + A;

}

int main() {

	int x[] = {1, 2, 3, 4, 5};
	int n = sizeof(x) / sizeof(int);

	cout << f(x, n, 0) << endl;

	return 0;
}