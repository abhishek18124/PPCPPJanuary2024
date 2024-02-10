#include<iostream>

using namespace std;

int main() {

	int n = 5;

	int i = 1;

	while (i <= n) {

		// for the ith row, print i nos.

		int j = 1;

		// int no;

		// if (i % 2 == 0) {
		// 	no = 0;
		// } else {
		// 	no = 1;
		// }

		int no = i % 2 == 0 ? 0 : 1;

		while (j <= i) {
			cout << no << " ";
			no = 1 - no; // flip the no
			// no = !no; // flip the no
			// if (no == 0) {
			// 	no = 1;
			// } else {
			// 	no = 0;
			// }

			// (i + j) % 2 == 0 ? cout << 1 << " " : cout << 0 << " ";

			j++;
		}

		i++;

		cout << endl;

	}

	return 0;
}