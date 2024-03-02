#include<iostream>

using namespace std;

// time : O(logn)

int firstOcc(int arr[], int n, int t) {

	int s = 0;
	int e = n - 1;

	int ans = -1;

	while (s <= e) {

		int m = s + (e - s) / 2;
		if (arr[m] == t) {
			ans = m;
			// move towards the left since you may find more occ. of t
			e = m - 1;
		} else if (t > arr[m]) {
			// move towards the right i.e. search space reduce from [s, e] to [m+1, e]
			s = m + 1;
		} else {
			// t < arr[m]
			// move towards the left i.e. search space reduces from [s, e] to [s, m-1]
			e = m - 1;
		}

	}

	return ans;

}

// time : O(logn)

int lastOcc(int arr[], int n, int t) {

	int s = 0;
	int e = n - 1;

	int ans = -1;

	while (s <= e) {

		int m = s + (e - s) / 2;
		if (arr[m] == t) {
			ans = m;
			// move towards the right since you may find more occ. of t
			s = m + 1;
		} else if (t > arr[m]) {
			// move towards the right i.e. search space reduce from [s, e] to [m+1, e]
			s = m + 1;
		} else {
			// t < arr[m]
			// move towards the left i.e. search space reduces from [s, e] to [s, m-1]
			e = m - 1;
		}

	}

	return ans;

}


int main() {

	int arr[] = {10, 20, 30, 30, 30, 30, 30, 40, 40, 50};
	int n = sizeof(arr) / sizeof(int);

	int t = 1000;

	int fo = firstOcc(arr, n, t); // logn

	if (fo == -1) {
		cout << 0 << endl;
	} else {

		int lo = lastOcc(arr, n, t); // logn

		cout << lo - fo + 1 << endl;

	}

	// total 2logn steps ~ O(logn)

	return 0;
}