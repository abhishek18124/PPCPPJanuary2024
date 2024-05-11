/*

Given a string (sequence of characters) of length n, generate all of its permutations.

Example

	Input : inp[] = "abc"
	Output: ["abc", "acb", "bac", "bca", "cba", "cab"]

*/

#include<iostream>
#include<cstring>

using namespace std;

void f(char inp[], int n, int i) {

	// base case

	if (i == n) { // inp[i] == '\0'

		cout << inp << endl;
		return;

	}

	// recursive case

	// take a sequence of n-i decisions for positions i to n-1

	// or

	// generate permutations for inp[i...n-1]

	// decide for the ith position

	for (int j = i; j < n; j++) {

		// check if inp[j] is a valid option for the ith position

		bool flag = true; // assume inp[j] is a valid option

		for (int k = j + 1; k < n; k++) {
			if (inp[k] == inp[j]) {
				flag = false;
				break;
			}
		}

		if (flag) {
			swap(inp[i], inp[j]);
			f(inp, n, i + 1);
			swap(inp[i], inp[j]); // backtracking step
		}

	}

}

int main() {

	char inp[] = "aabc";
	int n = strlen(inp);

	f(inp, n, 0);

	return 0;
}
