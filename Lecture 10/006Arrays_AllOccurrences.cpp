#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 10, 20};
	int n = sizeof(arr) / sizeof(int);

	int t = 100;

	bool flag = false; // assume 't' is not present in the arr[]

	for (int i = 0; i < n; i++) {

		if (arr[i] == t) {

			// you've found an occ. of the 't' at the ith index

			cout << i << " ";
			flag = true;

		}

	}

	if (flag == false) {

		// 't' was not found

		cout << -1 << endl;

	}

	return 0;
}