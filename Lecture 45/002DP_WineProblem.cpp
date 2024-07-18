/*

Given n wines in a row, with integers denoting the cost of each wine respectively. Each year
you can sell the first or the last wine in the row. However, the price of wines increases
over time.

Let the initial prices of the wines be [p_1, p_2, ... , p_n]. In the yth year, the profit
from the kth wine will be y*p_k.

Find the maximum profit from all the wines.

Example :
	Input : prices[] = {2, 3, 5, 1, 4}
	Ouptut: 50

*/

#include<iostream>
#include<vector>

using namespace std;

int helper(vector<int> prices, int i, int j, int y) {

	// base case

	if (i == j) {
		return prices[i] * y; // prices[j] * y
	}

	// recursive case

	// decide for the yth year

	// option 1 : sell ith bottle

	// option 2 : sell jth bottle

	return max(prices[i] * y + helper(prices, i + 1, j, y + 1),
	           prices[j] * y + helper(prices, i, j - 1, y + 1));

}

int helperTopDown(vector<int> prices, int i, int j, int y, vector<vector<int>>& dp) {

	// lookup
	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	// base case

	if (i == j) {
		return dp[i][j] = prices[i] * y; // prices[j] * y
	}

	// recursive case

	// decide for the yth year

	// option 1 : sell ith bottle

	// option 2 : sell jth bottle

	return dp[i][j] = max(prices[i] * y + helperTopDown(prices, i + 1, j, y + 1, dp),
	                      prices[j] * y + helperTopDown(prices, i, j - 1, y + 1, dp));

}

// time : O(n^2)
// space: O(n^2)

int helperBottomUp(vector<int> prices, int n) {

	vector<vector<int>> dp(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		// dp[i][i] = n * prices[i];
		int j = i;
		int y = n;
		dp[i][j] = y * prices[i];
	}

	for (int i = n - 2; i >= 0; i--) {
		for (int j = i + 1; j < n; j++) {
			// dp[i][j] = f(i, j) = find the max profit from bottle i to j starting from yth year ?
			int y = n - j + i;
			dp[i][j] = max(prices[i] * y + dp[i + 1][j],
			               prices[j] * y + dp[i][j - 1]);

		}
	}

	return dp[0][n - 1]; // at the 0,n-1th index we store f0,n-1

}

int main() {

	vector<int> prices = {2, 3, 5, 1, 4};
	int n = prices.size();
	cout << helper(prices, 0, n - 1, 1) << endl;

	vector<vector<int>> dp(n, vector<int>(n, -1));
	cout << helperTopDown(prices, 0, n - 1, 1, dp) << endl;

	cout << helperBottomUp(prices, n) << endl;

	return 0;
}