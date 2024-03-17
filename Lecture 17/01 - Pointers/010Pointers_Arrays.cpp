#include<iostream>

using namespace std;

int main() {

	int arr[] = {10, 20, 30, 40, 50, 60, 70};
	int n = sizeof(arr) / sizeof(int);

	for (int i = 0; i < n; i++) {

		cout << arr + i << " " << &arr[i] << " " << *(arr + i) << " " << arr[i] << endl;

	}

	return 0;
}