#include<iostream>

using namespace std;

int main() {

	// time : O(n)
	// space: O(1)

	int arr[] = {2, 3, 2, 4, 0, 2, 0};
	int n = sizeof(arr) / sizeof(int);
	int k = 6;

	int i = 0; // to store the start of the window
	int j = 0; // to store the end of the window

	int wsum = 0; // to store the window sum

	int max_len = 0; // to track the length of the longest
	// window which has a sum equals to k

	while (j < n) {

		// expand the window
		wsum += arr[j];

		// check for the violation of the window property
		if (wsum > k) {
			// start shrinking the window
			while (wsum > k) {
				wsum -= arr[i];
				i++;
			}
		}

		// check for the validity of the window, and update the answer
		if (wsum == k) {
			// you've found a valid window
			max_len = max(max_len, j - i + 1);
		}

		// continue expansion of the window
		j++;

	}

	cout << max_len << endl;

	return 0;
}