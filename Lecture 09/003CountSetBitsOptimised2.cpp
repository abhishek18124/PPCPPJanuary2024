#include<iostream>

using namespace std;

int main() {

	int n = 16;
	int cnt = 0; // to track the no. of set bits in 'n'

	while (n > 0) { // ~ logn iterations

		int rightMostBit = n & 1;
		if (rightMostBit == 1) {
			// rightMostBit of 'n' is set
			cnt++;
		}
		n = n >> 1;

	}

	cout << cnt << endl;

	return 0;
}