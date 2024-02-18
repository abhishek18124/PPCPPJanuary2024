#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);

	int k = 3;

	k = k % n;

	// 1. reverse the entire arr[]

	int i = 0;
	int j = n - 1;

	while (i < j) {

		swap(arr[i], arr[j]);
		i++;
		j--;

	}

	// 2. reverse the 1st k elements

	i = 0;
	j = k - 1;

	while (i < j) {

		swap(arr[i], arr[j]);
		i++;
		j--;

	}

	// 3. reverse the last n-k elements

	i = k;
	j = n - 1;

	while (i < j) {

		swap(arr[i], arr[j]);
		i++;
		j--;

	}

	for (int i = 0; i < n; i++) {
		cout <<  arr[i] << " ";
	}

	cout << endl;

	return 0;
}