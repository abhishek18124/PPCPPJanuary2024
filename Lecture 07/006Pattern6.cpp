#include<iostream>

using namespace std;

int main() {

	int n = 5;

	for (int i = 1; i <= n; i++) {

		// for the ith row, print n-i spaces

		for (int j = 1; j <= n - i; j++) {
			cout << "  ";
		}

		// followed by i nos.

		// int no = i;

		// for (int j = 1; j <= i; j++) {
		// 	cout << no << " ";
		// 	no++;
		// }

		for (int no = i, j = 1; j <= i; j++, no++) {
			cout << no << " ";
		}

		cout << endl;

	}

	return 0;
}