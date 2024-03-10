#include<iostream>
#include<climits>

using namespace std;

int maximumSubarraySum(int arr[], int n) {

	int maxSoFar = INT_MIN;

	// iterate over all the subarrays

	for (int i = 0; i <= n - 1; i++) {

		for (int j = i; j <= n - 1; j++) {

			// compute the sum for the subarray that starts at the ith index and ends at the jth index

			int sum = 0;

			for (int k = i; k <= j; k++) {

				sum += arr[k];

			}

			maxSoFar = max(maxSoFar, sum);


		}

	}

	return maxSoFar;

}

int main() {

	int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
	int n = sizeof(arr) / sizeof(int);

	cout << maximumSubarraySum(arr, n) << endl;

	return 0;
}