#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 10, 20};
	int n = sizeof(arr) / sizeof(int);

	int t = 100;
	int i;

	for (i = 0; i < n; i++) {

		if (arr[i] == t) {

			// you've found the 1st occ. of the 't' at the ith index

			cout << i << " ";
			break;

		}

	}

	if (i == n) {

		// 't' was not present in the arr[]

		cout << -1 << endl;

	}

	return 0;
}