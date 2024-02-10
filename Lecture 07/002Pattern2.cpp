#include<iostream>

using namespace std;

int main() {

	int n = 5;

	// iterate over the n rows

	int i = 1;

	while (i <= n) {

		// for the ith row, print i nos. in the increasing order starting with 1

		int no = 1;
		int j = 1;

		while (j <= i) {

			cout << no << " ";
			no++;
			j++;

		}

		i++;

		cout << endl;

	}

	return 0;
}