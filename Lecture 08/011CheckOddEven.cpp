#include<iostream>

using namespace std;

int main() {

	int n = 10;

	// if ((n & 1) == 1) {
	// 	// rightmost bit of n is 1 therefore n is odd
	// 	cout << "odd" << endl;
	// } else {
	// 	// rightmost bit of n is 0 therefore n is even
	// 	cout << "even" << endl;
	// }

	if (n & 1) {
		// rightmost bit of n is 1 therefore n is odd
		cout << "odd" << endl;
	} else {
		// rightmost bit of n is 0 therefore n is even
		cout << "even" << endl;
	}

	return 0;
}