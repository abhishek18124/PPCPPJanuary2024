#include<iostream>

using namespace std;

int main() {

	int arr[] = {1, 0, 1, 2, 0, 1, 2, 0, 1};
	int n = sizeof(arr) / sizeof(int);

	int low  = -1; // denotes the end   of the 0s region
	int mid  = 0;  // denotes the start of the unknown region
	int high = n;  // denotes the start of the 2s region

	/*

		arr[0.....low]  contains 0s
		arr[low+1...mid-1]  contains 1s
		arr[mid...high-1] contains unknown
		arr[high...n-1] contains 2s

	*/

	// time : O(n)

	while (mid < high) {

		if (arr[mid] == 0) {

			// put this 0 in region of zeros

			low++;
			swap(arr[low], arr[mid]);
			mid++;

		} else if (arr[mid] == 1) {

			// put this 1 in region of ones

			mid++;

		} else { // arr[mid] == 2

			// put this 2 in region of twos

			high--;
			swap(arr[mid], arr[high]);

		}

	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}