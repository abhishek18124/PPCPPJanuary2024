#include<iostream>

using namespace std;

int main() {

	int n = 169;
	int m = 10;

	int i = 3;
	int j = 6;

	// clear bits in range i to j

	int mask1 = -1 << (j + 1);
	int mask2 = -1 << i;

	int mask = mask1 | ~mask2;

	n = n & mask;

	// replace bits of n in range i to j

	cout << (n | (m << i)) << endl;

	return 0;
}