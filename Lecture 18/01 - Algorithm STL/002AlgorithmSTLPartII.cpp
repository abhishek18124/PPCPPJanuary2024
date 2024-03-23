#include<iostream>
#include<algorithm>

using namespace std;

// return true if you want 'a' to be ordered before 'b' otherwise return false

// bool comparator(int a, int b) {

// 	if (a > b) {

// 		// then you want 'a' to be ordered before 'b' in the sorted (decreasing) sequence

// 		return true;

// 	}

// 	return false;

// }


bool comparator(int a, int b) {

	return a > b;

}

int main() {

	int arr[] = {50, 40, 40, 30, 30, 30, 20, 10, 10};
	int n = sizeof(arr) / sizeof(int);

	// sorting a sequence in the decreasing order

	// 1. using a customer comparator

	// sort(arr, arr + n, comparator);
	// sort(arr, arr+n, &comparator);

	// for (int i = 0; i < n; i++) {
	// 	cout << arr[i] << " ";
	// }

	// cout << endl;

	// 2. using greater<T>() function object / functor

	// sort(arr, arr + n, greater<int>());

	greater<int> funcObj;

	sort(arr, arr + n, funcObj);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}
