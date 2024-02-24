#include<iostream>

using namespace std;

int main() {

	int arr[] = {50, 40, 30, 20, 10};
	int n = sizeof(arr) / sizeof(int);

	int compCnt = 0;

	for (int i = 1; i <= n - 1; i++) {

		// for the ith pass, place the largest element in the unsorted part of the array to its correct position

		bool flag = false; // assume, no swaps will be done in the ith pass

		for (int j = 0; j < n - i; j++) {
			compCnt++;
			if (arr[j] > arr[j + 1]) {
				flag = true;
				swap(arr[j], arr[j + 1]);
			}
		}

		if (flag == false) {
			// arr[] is sorted, no need to go to the next pass
			break;
		}


	}

	cout << compCnt << endl;

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}