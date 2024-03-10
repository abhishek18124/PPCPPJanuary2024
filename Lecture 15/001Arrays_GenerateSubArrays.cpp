#include<iostream>

using namespace std;

void generateSubarrays(int arr[], int n) {

	// iterate over all the possible starting indices

	for (int i = 0; i <= n - 1; i++) {

		// for given i, iterate over all the possible ending indices

		for (int j = i; j <= n - 1; j++) {

			// generate the subarray that starts at the ith index and ends at the jth index

			for (int k = i; k <= j; k++) {
				cout << arr[k] << " ";
			}

			cout << endl;

		}

		cout << endl;

	}

}

int main() {

	int arr[] = {10, 20, 30, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	generateSubarrays(arr, n);

	return 0;
}