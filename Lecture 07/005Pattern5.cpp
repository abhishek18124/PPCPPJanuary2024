#include<iostream>

using namespace std;

int main() {

	int n = 5;

	// iterate over the rows

	int i = 1;

	while (i <= n) {

		// for the ith row, print n-i spaces

		int j = 1;

		while (j <= n - i) {
			cout << " ";
			j++;
		}

		// followed by i stars

		// int k = 1;

		// while (k <= i) {
		// 	cout << "*";
		// 	k++;
		// }

		j = 1;

		while (j <= i) {
			cout << "*";
			j++;
		}

		i++;

		cout << endl;

	}

	return 0;
}