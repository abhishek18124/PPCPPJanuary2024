#include<iostream>

using namespace std;

int computeSum(int arr[], int n) {

	// int n = sizeof(arr) / sizeof(int); // arr[] has decayed into a integer pointer

	// sizeof(arr) = sizeof(integer pointer) = 4B or 8B

	cout << "sizeof(arr) = " << sizeof(arr) << "B" << endl;

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return sum;
}

// int computeSum(int* arr, int n) {

// 	int sum = 0;
// 	for (int i = 0; i < n; i++) {
// 		sum += arr[i];
// 	}

// 	return sum;
// }

// int computeSum(int* arr, int n) {

// 	int sum = 0;
// 	for (int i = 0; i < n; i++) {
// 		sum += *(arr + i); // arr[i]
// 	}

// 	return sum;
// }

int main() {

	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(int);

	cout << "sizeof(arr) = " << sizeof(arr) << "B" << endl;

	cout << computeSum(arr, n) << endl;

	// cout << computeSum(&arr[0], n) << endl;

	return 0;
}