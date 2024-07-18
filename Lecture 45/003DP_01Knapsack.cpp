/*

Example :
	Input : N = 5, W = 4
			weights[] = {1, 2, 3, 2, 2}
			profits[] = {8, 4, 1, 5, 3}
	Output: 13

*/


#include<iostream>
#include<vector>

using namespace std;

int helper(vector<int> weights, vector<int> profits, int N, int i, int w) {

	// base case
	if (i == N) { // mandatory
		return 0;
	}

	if (w == 0) { // optional since wi > 0
		return 0;
	}

	// recursive case

	// decide for ith item

	if (weights[i] > w) {
		// exclude the ith item from the knapsack
		return helper(weights, profits, N, i + 1, w);
	}

	// option 1 : include ith item into the knapsack

	// option 2 : exclude ith item from the knapsack

	return max(profits[i] + helper(weights, profits, N, i + 1, w - weights[i]),
	           helper(weights, profits, N, i + 1, w));

}

// time : O(NW)
// space: O(NW)

int helperBottomUp(vector<int> weights, vector<int> profits, int N, int W) {

	vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));

	// for (int i = 0; i <= N; i++) {
	// 	dp[i][0] = 0;
	// }

	// for (int w = 0; w <= W; w++) {
	// 	dp[N][w] = 0;
	// }

	for (int i = N - 1; i >= 0; i--) {
		for (int w = 1; w <= W; w++) {
			// dp[i][w] = f(i, w)

			// decide for ith item

			if (weights[i] > w) {
				// exclude the ith item from the knapsack
				dp[i][w] = dp[i + 1][w];
			} else {

				// option 1 : include ith item into the knapsack

				// option 2 : exclude ith item from the knapsack

				dp[i][w] = max(profits[i] + dp[i + 1][w - weights[i]],
				               dp[i + 1][w]);
			}
		}
	}

	return dp[0][W]; // at the 0,Wth index we store f0,W

}


int main() {

	int N = 5;
	int W = 4;

	vector<int> weights = {1, 2, 3, 2, 2};
	vector<int> profits = {8, 4, 1, 5, 3};

	cout << helper(weights, profits, N, 0, W) << endl;

	cout << helperBottomUp(weights, profits, N, W) << endl;

	return 0;
}