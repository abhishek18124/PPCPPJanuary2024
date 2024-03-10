// constraints : n <= 100

#include<iostream>

using namespace std;

// time : n + n^2 ~ O(n^2)
// space: O(n) due to csum[]

int maximumSubarraySumOptimsed(int arr[], int n) {

	int csum[n + 1];

	csum[0] = 0;

	// n-steps

	for (int i = 1; i <= n; i++) {
		csum[i] = csum[i - 1] + arr[i - 1];
	}

	// for (int i = 0; i <= n; i++) {
	// 	cout << csum[i] << " ";
	// }

	// cout << endl;

	// ~ n^2

	int maxSoFar = INT_MIN;

	// iterate over all the subarrays

	for (int i = 0; i <= n - 1; i++) {

		for (int j = i; j <= n - 1; j++) {

			// compute the sum for the subarray that starts at the ith index and ends at the jth index

			int sum = csum[j + 1] - csum[i]; // const op.

			maxSoFar = max(maxSoFar, sum);

		}

	}

	return maxSoFar;

}

int main() {

	int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(int);

	cout << maximumSubarraySumOptimsed(arr, n) << endl;

	return 0;
}