/*

N Queens Problem

The problem is to place 'n' queens on an 'n x n' chessboard, so that no two queens are attacking
each other, this means that no two queens are in the same row, the same column, or the same diagonal.

Example
	Input : N = 4
	Output:
			_ Q _ _	     _ _ Q _
	        _ _ _ Q      Q _ _ _
	        Q _ _ _      _ _ _ Q
	        _ _ Q _      _ Q _ _

	        [1, 3, 0, 2] [2, 0, 3, 1]

Constraint:
	1<=n<=10

*/

#include<iostream>

using namespace std;

void f(int n, int pos[], int r) {

	// base case - 'n' queens have been placed on the 'nxn' chessboard

	if (r == n) {

		// you've placed all the n queens

		// for (int i = 0; i < n; i++) {
		// 	cout << pos[i] << " ";
		// }

		// cout << endl;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (pos[i] == j) {
					cout << "Q ";
				} else {
					cout << "_ ";
				}
			}
			cout << endl;
		}
		cout << endl;

		return;

	}

	// recursive case - make a decision for 'Qr'

	// place the 'Qr' in the jth column of row 'r' where 0 <= j < n
	// such that it does not attack on previously placed queen 'Qi'
	// where 0 <= i < r

	for (int j = 0; j < n; j++) {

		// check if you can place Qr in the jth column of row r

		bool flag = true; // assume you can place Qr in the jth column row r

		for (int i = 0; i < r; i++) {

			// will Qi attack Qr when it is placed in the jth column of row 'r'

			if (pos[i] == j || pos[i] == j + (r - i) || pos[i] == j - (r - i)) {
				flag = false;
				break;
			}

		}

		if (flag) {

			pos[r] = j;
			f(n, pos, r + 1);

		}

	}

}


int main() {

	int n = 4;
	int pos[10];

	f(n, pos, 0);

	return 0;
}