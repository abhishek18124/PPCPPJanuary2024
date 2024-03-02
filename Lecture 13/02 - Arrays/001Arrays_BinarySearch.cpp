#include<iostream>

using namespace std;

int binarySearch(int arr[], int n, int t) {

	int s = 0;
	int e = n - 1;

	while (s <= e) {
		int m = s + (e - s) / 2; // (s + e) / 2;
		if (arr[m] == t) {
			return m;
		} else if (t > arr[m]) {
			s = m + 1;
		} else { // t < arr[m]
			e = m - 1;
		}
	}

	// t was not found
	return -1;

}

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);

	int t = 100;

	cout << binarySearch(arr, n, t) << endl;

	return 0;
}