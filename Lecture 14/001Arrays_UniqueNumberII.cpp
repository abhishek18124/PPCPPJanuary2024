#include<iostream>

using namespace std;

void findTwoUniqueNumbers(int arr[], int n) {

	int xor_res = 0;

	for (int i = 0; i < n; i++) {

		xor_res = xor_res ^ arr[i];

	}

	int copy_xor_res = xor_res;

	// cout << xor_res  <<  endl;

	int pos = 0;

	while (xor_res > 0) {

		int rightMostBit = xor_res & 1;
		if (rightMostBit == 1) {
			break;
		}

		pos++;
		xor_res = xor_res >> 1;

	}

	// cout << pos << endl;

	// find the first unique no.

	int firstUniqueNo = 0;
	int secondUniqueNo = 0;

	for (int i = 0; i < n; i++) {

		// check if arr[i] is part of set 1 or not ( any no. is part of set 1 if its bit at pos is 0)

		int mask = 1 << pos;

		if ((arr[i] & mask) == 0) {

			// the 'pos' bit of arr[i] is zero therefore arr[i] is part of set 1

			firstUniqueNo = firstUniqueNo ^ arr[i];

		} else {

			// the 'pos' bit of arr[i] is one therefore arr[i] is part of set 2

			secondUniqueNo = secondUniqueNo ^ arr[i];

		}

	}

	cout << firstUniqueNo << " " << secondUniqueNo << endl;

	cout << "secondUniqueNo = " << (copy_xor_res ^ firstUniqueNo) << endl;

}

int main() {

	int arr[] = {1, 1, 2, 2, 3, 3, 4, 4, 6, 8};

	int n = sizeof(arr) / sizeof(int);

	findTwoUniqueNumbers(arr, n);

	return 0;
}
