/*

	constraints :

	0 < m, n <= 10

*/

#include<iostream>

using namespace std;

void printDiagonal(int mat[][10], int m, int n, int i, int j) {

	// print the diagonal that starts at the (i, j)th index

	int diagonalLength = min(m - i, n - j);

	for (int k = 0; k < diagonalLength; k++) {

		cout << mat[i + k][j + k] << " ";

	}

	cout << endl;

}

int main() {

	int mat[10][10] = {
		{11, 12, 13, 14},
		{15, 16, 17, 18},
		{19, 20, 21, 22}
	};

	int m = 3;
	int n = 4;

	// (0, j)

	for (int j = 0; j <= n - 1; j++) {

		printDiagonal(mat, m, n, 0, j);

	}

	// (i, 0)

	for (int i = 1; i <= m - 1; i++) {

		printDiagonal(mat, m, n, i, 0);

	}

	return 0;
}