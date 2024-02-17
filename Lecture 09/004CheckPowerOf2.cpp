#include<iostream>

using namespace std;

int main() {

	int n = 17;

	if ((n & (n - 1)) == 0) {
		// n is a power of 2 since it has only 1 set bit
		cout << n << " power of 2" << endl;
	} else {
		cout << n << " not a power of 2" << endl;
	}

	return 0;
}