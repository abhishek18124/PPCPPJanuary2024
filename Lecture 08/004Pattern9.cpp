#include<iostream>

using namespace std;

int main() {

	int n = 5;

	// iterate over the rows

	for (int i = 1; i <= n; i++) {

		// for the ith row, print n-i+1 characters in the inc. order starting with 'A'

		char ch = 'A';

		for (int j = 1; j <= n - i + 1; j++) {
			cout << ch << " ";
			ch++;
		}

		// print n-i+1 more characters in the decreasing order starting with the char with which you've ended increasing pattern

		ch--;

		for (int j = 1; j <= n - i + 1; j++) {
			cout << ch << " ";
			ch--;
		}


		cout << endl;

	}

	return 0;
}