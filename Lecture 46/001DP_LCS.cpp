/*

Given two strings s1 and s2, return the length of their longest common subsequence.
If there is no common subsequence, return 0.

A subsequence of a string is a new string generated from the original string with some characters
(can be none) deleted without changing the relative order of the remaining characters.

For example, "ace" is a subsequence of "abcde".
A common subsequence of two strings is a subsequence that is common to both strings.

Example :

	Input : s1 = "ATGC", s2 = "AGCT"
	Output: 3
	Explanation : "AGC" is the LCS between s1 and s2

	Input : s1 = "AGGTAB", s2 = "GXTXAYB"
	Output: 4
	Explanation : “GTAB” is the LCS between s1 and s2

*/

#include<iostream>
#include<vector>

using namespace std;

int LCS(string s1, string s2, int m, int n, int i, int j) {

	// base case
	if (i == m || j == n) {
		return 0;
	}

	// recursive case

	// find the len. of the LCS(s1[i...m-1], s2[j...n-2])

	if (s1[i] == s2[j]) {
		return 1 + LCS(s1, s2, m, n, i + 1, j + 1);
	}

	return max(LCS(s1, s2, m, n, i + 1, j), LCS(s1, s2, m, n, i, j + 1));

}

// time : O(mn)
// space: O(mn) due to dp[][]

int LCSBottomUp(string s1, string s2, int m, int n) {

	vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

	for (int i = m - 1; i >= 0; i--) {
		for (int j = n - 1; j >= 0; j--) {
			// dp[i][j] = f(i, j)
			if (s1[i] == s2[j]) {
				dp[i][j] = 1 + dp[i + 1][j + 1];
			} else {
				dp[i][j] = max(dp[i][j + 1], dp[i + 1][j]);
			}
		}
	}

	return dp[0][0]; // at the 0,0th index we store f0,0

}

int main() {

	string s1("ATGC");
	string s2("AGCT");

	int m = s1.size();
	int n = s2.size();

	cout << LCS(s1, s2, m, n, 0, 0) << endl;

	cout << LCSBottomUp(s1, s2, m, n) << endl;

	return 0;
}