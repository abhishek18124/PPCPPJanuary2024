// contraints : n <= 100, k <= 9

#include<iostream>

using namespace std;

// time = n + n = 2n ~ O(n)
// space= k + 1 ~ O(k) due freq[]

int main() {

	int arr[] = {1, 0, 3, 2, 3, 1, 2, 0, 2};
	int n = sizeof(arr) / sizeof(int);

	int k = 3; // denotes the maximum element in the array

	int freq[k + 1] = {0};

	// time : linear for freq[]

	for (int i = 0; i < n; i++) {

		// int x = arr[i];
		// freq[x]++;

		freq[arr[i]]++; // const

	}

	// for (int i = 0; i <= k; i++) {

	// 	cout << freq[i] << " ";

	// }

	// cout << endl;

	// time : linear to print the sorted arr[]

	for (int i = 0; i <= k; i++) {

		// print 'i' freq[i] times

		// i = 0, print 0 freq[0] times
		// i = 1, print 1 freq[1] times
		// i = 2, print 2 freq[2] times
		// ...
		// i = k, print k freq[k] times

		for (int j = 1; j <= freq[i]; j++) { // this loop runs freq[i] times
			cout << i << " ";
		}

	}

	return 0;
}