/*

	Constraints

	0 < m, n <= 10

	here, m denotes the no. of rows in the given 2D array
	      n denotes the no. of cols in the given 2D array

*/

#include<iostream>

using namespace std;

int main() {

	int arr[10][10]; // based on the contraints

	int m;
	cout << "Enter the no. of row : ";
	cin >> m;

	int n;
	cout << "Enter the no. of columns : ";
	cin >> n;

	// read mxn values into the 2D array

	for (int i = 0; i < m; i++) {

		// read values in the ith row

		for (int j = 0; j < n; j++) {

			cin >> arr[i][j];

		}

	}

	// print mxn values of the 2D array

	for (int i = 0; i < m; i++) {

		// print values in the ith row

		for (int j = 0; j < n; j++) {

			cout << arr[i][j] << " ";

		}

		cout << endl;

	}

	cout << endl;

	return 0;
}


