// constraints : n <= 100

#include<iostream>

using namespace std;

int partition(int arr[], int s, int e) {

	int pivot = arr[e];

	int j = s;
	int i = s - 1; // j-1

	while (j < e) {

		if (arr[j] > pivot) {

			// add arr[j] to the right partition

			j++;

		} else {

			// add arr[j] to the left partition

			i++;
			swap(arr[i], arr[j]);
			j++;

		}


	}

	swap(arr[i + 1], arr[e]);

	return i + 1;

}

void quickSort(int arr[], int s, int e) {

	// base case

	if (s >= e) { // just s > e will also work, try it yourself
		return;
	}

	// recursive case

	// sort arr[s...e] using the quickSort algorithm

	// 1. partition the array around the pivot i.e. arr[e]

	int pidx = partition(arr, s, e);

	// 2. recursively sort the left and right partitions i.e. arr[s...pidx-1] and arr[pidx+1...e]

	quickSort(arr, s, pidx - 1);
	quickSort(arr, pidx + 1, e);

}

int main() {

	int arr[] = {60, 50, 20, 10, 40, 30};
	int n = sizeof(arr) / sizeof(int);

	quickSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}