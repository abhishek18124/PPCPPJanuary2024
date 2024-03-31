#include<iostream>

using namespace std;

void read(int** ptr, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> ptr[i][j];
		}
	}
}

void print(int** ptr, int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << ptr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void print2D(int arr[][3], int m, int n) { // int (*arr)[3]
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {

	int m = 2;
	int n = 3;

	int** ptr = new int*[m];
	for (int i = 0; i < m; i++) {
		ptr[i] = new int[n];
	}

	read(ptr, m, n);

	print(ptr, m, n);

	for (int i = 0; i < m; i++) {
		delete [] ptr[i];
	}

	delete [] ptr;

	int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

	print2D(arr, 2, 3);

	return 0;
}