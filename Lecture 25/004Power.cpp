#include<iostream>

using namespace std;

int f(int x, int y) {

	// base case

	if (y == 0) {

		// find x^0 i.e. multiply x, 0 times

		return 1;

	}

	// recursive case

	// find x^y i.e. multiply x, y times

	// 1. ask your friend to find x^(y-1) i.e. multiply x, y-1 times

	int A = f(x, y - 1);

	return x * A;

}

int fOptimised(int x, int y) {

	// base case

	if (y == 0) {
		// find x^0
		return 1;
	}

	// recursive case

	// find x^y

	// 1. ask your friend to find x^(y/2)

	int A = fOptimised(x, y / 2);

	if (y % 2 == 0) {
		return A * A;
	}

	// y is odd

	return A * A * x;

}

int main() {

	int x = 3;
	int y = 7;

	cout << f(x, y) << endl;

	cout << fOptimised(x, y) << endl;

	return 0;
}