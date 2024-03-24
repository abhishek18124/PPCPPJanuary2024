#include<iostream>
#include<string>

using namespace std;

int main() {

	string str = "abcde";
	int n = str.size();

	// iterate over the starting indices of str[]

	for (int i = 0; i < n; i++) {

		// for each starting index i, iterate over all the endings indices

		for (int j = i; j < n; j++) {

			// extract the substring that starts at the ith index and ends at the jth index

			string subString = str.substr(i, j - i + 1);
			cout << subString << endl;

			// for (int k = i; k <= j; k++) {
			// 	cout << str[k];
			// }

			// cout << endl;

		}

		cout << endl;

	}

	cout << endl;

	return 0;
}