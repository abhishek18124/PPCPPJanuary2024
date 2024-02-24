#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);

	int t = 100;

	int s = 0;
	int e = n - 1;

	while (s <= e) {
		// int m = (s + e) / 2;
		int m = s + (e - s) / 2;
		if (arr[m] == t) {
			cout << m << endl;
			break;
		} else if (t > arr[m]) {
			// search for the 't' in [m+1, e]
			s = m + 1;
		} else {
			// t < arr[m] therefore search for the 't' in [s, m-1]
			e = m - 1;
		}
	}

	if (s > e) {
		cout << -1 << endl;
	}

	return 0;
}