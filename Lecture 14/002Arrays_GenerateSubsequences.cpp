#include<iostream>
#include<cmath>

using namespace std;

void generateSubsequences(int arr[], int n) {

	for (int num = 0; num < (1 << n); num++) { // pow(2, n) is equal to (1 << n)

		cout << num << " : ";

		for (int k = 0; k < n; k++) { // this loop can be optimised, try yourself as hw

			// check if the kth bit of 'num' is set or not

			int mask = (1 << k);

			if ((num & mask) != 0) {

				// kth bit of 'num' is set therefore include arr[k] into the current subsequence

				cout << arr[k] << " ";

			}

		}

		cout << endl;

	}

}

int main() {

	int arr[] = {10, 20, 30};
	int n = sizeof(arr) / sizeof(int);

	generateSubsequences(arr, n);

	return 0;
}
