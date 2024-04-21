#include<iostream>

using namespace std;

int f(int x, int y) {

	// base case

	if (y == 0) {

		// multiply x with 0 or add x, 0 times

		return 0;

	}

	// recursive case

	// multiply x with y or add x, y times

	// 1. ask your friend to add x, y-1 times

	int A = f(x, y - 1);

	return x + A;

}

int main() {

	int x = 3;
	int y = 4;

	cout << f(x, y) << endl;

	return 0;
}