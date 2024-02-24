#include<iostream>

using namespace std;

int main() {

	int arr[] = {50, 40, 10, 30, 20};
	int n = sizeof(arr) / sizeof(int);

	for (int i = 0; i <= n - 2; i++) {

		// for the ith pass, place the smallest element in the unsorted part of the arr[] to its correct position

		int correctPos = i;
		int minIdx = i;

		for (int j = i + 1; j < n; j++) {

			if (arr[j] < arr[minIdx]) {

				minIdx = j;

			}

		}

		// minIdx stores the index of the smallest element in the unsorted part of the arr[]

		swap(arr[correctPos], arr[minIdx]);


	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}