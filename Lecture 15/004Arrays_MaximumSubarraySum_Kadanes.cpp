// constraints : n <= 100

#include<iostream>

using namespace std;

// time : O(n)
// space: O(n) due x[]

int maximumSubarraySumUsingKadanes(int arr[], int n) {

	int x[n];
	x[0] = arr[0];

	int maxSoFar = x[0];

	for (int i = 1; i < n; i++) {

		x[i] = max(x[i - 1] + arr[i], arr[i]); // const
		maxSoFar = max(maxSoFar, x[i]); // const

	}

	return maxSoFar;

}

// time : O(n)
// space: O(1)

int maximumSubarraySumUsingKadanesSpaceOptimised(int arr[], int n) {

	int x;
	x = arr[0]; // at present, x is x[0]

	int maxSoFar = x;

	for (int i = 1; i < n; i++) {

		x = max(x + arr[i], arr[i]); // const
		maxSoFar = max(maxSoFar, x); // const

	}

	return maxSoFar;

}

int main() {

	int arr[] = { -3, 2, -1, 4, -5};
	int n = sizeof(arr) / sizeof(int);

	cout << maximumSubarraySumUsingKadanes(arr, n) << endl;
	cout << maximumSubarraySumUsingKadanesSpaceOptimised(arr, n) << endl;

	return 0;
}