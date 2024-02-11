#include<iostream>

using namespace std;

int main() {

	int n = 42;
	int k = 4;

	int mask = (1 << k);

	if ((n & mask) == 0) {

		// kth bit of n is not set

		cout << "false" << endl;

	} else {

		// kth bit of n is set

		cout << "true" << endl;

	}

	return 0;
}