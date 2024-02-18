#include<iostream>
#include<climits>

using namespace std;

int main() {

	int arr[] = {20, 5, 0, 25, 15, 10};
	int n = sizeof(arr) / sizeof(int);

	int fL = INT_MIN;
	int sL = INT_MIN;
	int tL = INT_MIN;

	for (int i = 0; i < n; i++) {

		if (arr[i] > fL) {

			tL = sL;
			sL = fL;
			fL = arr[i];

		} else if (arr[i] > sL) {

			tL = sL;
			sL = arr[i];

		} else if (arr[i] > tL) {

			tL = arr[i];

		}

	}

	cout << fL << " " << sL << " " << tL << endl;

	return 0;
}