#include<iostream>

using namespace std;

int f(int n) {

	// base case

	// if(n == 0) {
	// 	// find the 0th fib. no.
	// 	return 0;
	// }

	// if(n == 1) {
	// 	// find the 1st fib. no.
	// 	return 1;
	// }

	if (n == 0 || n == 1) {
		return n;
	}

	// recursive case

	// find the nth fib. no.

	// 1. ask your friend to find the n-1th fib. no.

	int A = f(n - 1);

	// 2. ask your friend to find the n-2th fib. no.

	int B = f(n - 2);

	return A + B;

}

int main() {

	int n = 7;

	cout << f(n) << endl;

	return 0;
}