/*

Given a number n, count the minimum steps to reduce n to 1
such that at each step you may

	reduce n to n/2 if n is divisible by 2
	or reduce n to n/3 if n is divisible by 3
	or reduce n to n-1 by decrementing n by 1

Example :
	Input : n = 10
	Output : 3

	Input : 6
	Output : 2

*/

#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int minSteps(int n) {

	// base case
	if (n == 1) {
		// count min. steps required to reduce 1 to 1
		return 0;
	}

	// recursive case

	// f(n) = count min. steps requried to reduce n to 1

	// decide the next step

	// option 1 : reduce n to n-1

	int x = minSteps(n - 1);

	// option 2 : reduce n to n/2 given n%2 == 0

	int y = INT_MAX;
	if (n % 2 == 0) {
		y = minSteps(n / 2);
	}

	// option 3 : reduce n to n/3 given n%3 == 0

	int z = INT_MAX;
	if (n % 3 == 0) {
		z = minSteps(n / 3);
	}

	return 1 + min(x, min(y, z));

}

int minStepsTopDown(int n, vector<int>& dp) {

	// lookup

	if (dp[n] != -1) {
		// you've already computed f(n)
		return dp[n];
	}

	// base case
	if (n == 1) {
		return dp[n] = 0;
	}

	// recursive case

	// f(n) = count min. steps requried to reduce n to 1

	// decide the next step

	// option 1 : reduce n to n-1

	int x = minStepsTopDown(n - 1, dp);

	// option 2 : reduce n to n/2 given n%2 == 0

	int y = INT_MAX;
	if (n % 2 == 0) {
		y = minStepsTopDown(n / 2, dp);
	}

	// option 3 : reduce n to n/3 given n%3 == 0

	int z = INT_MAX;
	if (n % 3 == 0) {
		z = minStepsTopDown(n / 3, dp);
	}

	return dp[n] = 1 + min(x, min(y, z));

}

// time : O(n)
// space: O(n) due dp[]

int minStepsBottomUp(int n) {

	vector<int> dp(n + 1); // 0th index is not used

	dp[1] = 0; // at the 1st index of dp[] we store f(1)

	for (int i = 2; i <= n; i++) {

		// dp[i] = f(i) = min. steps required to reduce i to 1

		// decide the next step

		// option 1 : reduce i to i - 1

		int x = dp[i - 1];

		// option 2 : reduce i to i/2 given i%2 == 0

		int y = INT_MAX;
		if (i % 2 == 0) {
			y = dp[i / 2];
		}

		// option 3 : reduce i to i/3 given i%3 == 0

		int z = INT_MAX;
		if (i % 3 == 0) {
			z = dp[i / 3];
		}

		dp[i] = 1 + min(x, min(y, z));

	}

	return dp[n]; // at the nth index of dp[] we store f(n)

}

int main() {

	int n = 10;

	cout << minSteps(n) << endl;

	vector<int> dp(n + 1, -1); // 0th index is not used

	cout << minStepsTopDown(n, dp) << endl;

	cout << minStepsBottomUp(n) << endl;

	return 0;
}