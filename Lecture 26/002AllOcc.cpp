#include<iostream>

using namespace std;

bool flag = false; // assume 't' is not present in x[]

void allOcc(int x[], int n, int t, int i) {

	// base case

	if (i == n) {

		if (!flag) { // flag == false

			// 't' not found

			cout << -1 << " ";

		}

		return;

	}

	// recursive case

	// find all the occ. of 't' in x[i...n-1]

	if (x[i] == t) {

		flag = true;
		cout << i << " ";

	}

	// recursively, find all the occ. of 't' in x[i+1...n-1]

	allOcc(x, n, t, i + 1);

}

int main() {

	int x[] = {10, 20, 30, 10, 20};
	int n = sizeof(x) / sizeof(int);
	int t = 100;

	allOcc(x, n, t, 0);

	return 0;
}