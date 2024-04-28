#include<iostream>

using namespace std;

int binarySearch(int x[], int t, int s, int e) {

	// base case

	if (s > e) {

		return -1;

	}

	// recursive case

	// search for the 't' in x[s...e]

	int m = s + (e - s) / 2;

	if (x[m] == t) {

		return m;

	} else if (t > x[m]) {

		// reduce the search space from [s, e] to [m+1, e] and recursively search for the 't' in it

		return binarySearch(x, t, m + 1, e);

	}

	// t < x[m]

	// reduce the search space from [s, e] to [s, m-1] and recursively search for the 't' in it

	return binarySearch(x, t, s, m - 1);

}

int main() {

	int x[] = {10, 20, 30, 40, 50};
	int n = sizeof(x) / sizeof(int);
	int t = 100;

	cout << binarySearch(x, t, 0, n - 1) << endl;

	return 0;
}