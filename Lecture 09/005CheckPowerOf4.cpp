#include<iostream>

using namespace std;

int main() {

	int n = 100;

	int mask = 0xAAAAAAAA;

	if ((n & (n - 1)) == 0 and (n & mask) == 0) {
		cout << n << " is power of 4" << endl;
	} else {
		cout << n << " is not a power of 4" << endl;
	}

	return 0;
}