#include<iostream>

using namespace std;

void f(char maze[][10], char path[][10], int m, int n, int i, int j) {

	// base case

	if (i == m || j == n || i == -1 || j == -1) {
		return;
	}

	if (maze[i][j] == 'X') {
		return;
	}

	if (i == m - 1 and j == n - 1) {
		path[m - 1][n - 1] = '1';

		for (int ii = 0; ii < m; ii++) {
			for (int jj = 0; jj < n; jj++) {
				cout << path[ii][jj] << " ";
			}
			cout << endl;
		}

		cout << endl;

		path[m - 1][n - 1] = '0';
		return;
	}

	// recursive case

	// if (path[i][j] == '1') {
	// 	return;
	// }

	path[i][j] = '1';
	maze[i][j] = 'X';

	f(maze, path, m, n, i, j + 1);
	f(maze, path, m, n, i + 1, j);
	f(maze, path, m, n, i, j - 1);
	f(maze, path, m, n, i - 1, j);

	path[i][j] = '0'; // backtracking
	maze[i][j] = '0'; // backtracking

}

int main() {

	char maze[][10] = {
		"0X00",
		"000X",
		"X0X0",
		"X00X",
		"XX00"
	};

	char path[][10] = {
		"0000",
		"0000",
		"0000",
		"0000",
		"0000"
	};

	int m = 5;
	int n = 4;

	f(maze, path, m, n, 0, 0);

	return 0;
}
