/*

	Constraints :

	0 < m, n <= 10

*/

#include<iostream>

using namespace std;

// #swaps = (n^2 - n) / 2 ~ n^2
// time spent on a single swap is const. i.e. O(1)
// total time = # swaps * time spent on 1 swap ~ n^2.c ~ O(n^2)

void transpose(int mat[][10], int n) {

	for (int i = 0; i <= n - 2; i++) {

		for (int j = i + 1; j <= n - 1; j++) {

			swap(mat[i][j], mat[j][i]);

		}

	}

}

int main() {

	int n;
	cin >> n;

	int mat[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> mat[i][j];
		}
	}

	cout << "matrix before transpose = " << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << endl;

	transpose(mat, n); // in C++, 2d arrays are by default passed by reference

	cout << "matrix after transpose = " << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}