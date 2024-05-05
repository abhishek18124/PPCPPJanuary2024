/*

Given a string of length n, generate all of its subsequences.

A subsequence of a given string (sequence) is a string (sequence) that is generated by
removing zero or more characters from the given string (sequence) without changing its
order.

Example

	Input : inp[] = "abc"
	Output: ["", "c", "b", "bc", "a", "ac", "ab", "abc"]

Constraints

  1 < n < 10

*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> v; // to store all the subsequences

void f(char inp[], char out[], int i, int j) {

	// base case

	if (inp[i] == '\0') { // i == n

		out[j] = '\0';
		// cout << out << endl;

		// string s(out);
		// v.push_back(s);

		v.push_back(string(out));

		return;

	}

	// recursive case

	// generate all the subseq for inp[i...n-1]

	// or

	// take a sequence of n-i decisions for characters i to n-1

	// make a decision for the ith char i.e. inp[i]

	// option 1 : include inp[i] into out[]

	out[j] = inp[i];
	f(inp, out, i + 1, j + 1);

	// option 2 : exclude inp[i] from the out[]

	f(inp, out, i + 1, j);

}

int main() {

	char inp[] = "abcd";
	char out[10];

	f(inp, out, 0, 0);

	sort(v.begin(), v.end());

	for (string s  : v) {
		cout << s << endl;
	}

	cout << endl;

	return 0;
}
