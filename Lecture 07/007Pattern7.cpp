#include<iostream>

using namespace std;

int main() {

	int n = 5;

	// iterate over the rows

	for (int i = 1; i <= n; i++) {

		// for the ith row, print n-i spaces
		for (int j = 1; j <= n - i; j++) {
			cout << "  ";
		}

		// followed by i nos. in the inc. order starting with i
		int no = i;
		for (int j = 1; j <= i; j++) {
			cout << no << " ";
			no++;
		}

		// followed by i-1 nos. in the dec. order starting with 2i-2
		// no = 2 * i - 2;
		no = no - 2;
		for (int j = 1; j <= i - 1; j++) {
			cout << no << " ";
			no--;
		}


		cout << endl;

	}

	return 0;
}