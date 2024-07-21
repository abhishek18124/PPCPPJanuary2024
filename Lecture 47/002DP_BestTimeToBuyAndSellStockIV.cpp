// https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/

class Solution {

public:

    int helper(vector<int>& prices, int N, int i, int k) {

        // base case

        if (k == 0) {
            return 0;
        }

        if (i == N) { // k is +ve
            return 0;
        }

        // recursive case

        // f(i,k) : find the maximum profit you can make by completing <=k transactions starting from the ith day

        // make a decision for the ith day

        // 1. do not buy the stock on the ith day

        int donotBuy = helper(prices, N, i + 1, k);

        // 2. buy the stock on the ith day

        // decide the selling day

        int buyMaxSoFar = INT_MIN;

        for (int j = i + 1; j <= N - 1; j++) {

            // sell the stock on the jth day which was bought on the ith day

            buyMaxSoFar = max(buyMaxSoFar, prices[j] - prices[i] + helper(prices, N, j + 1, k - 1));

        }

        return max(donotBuy, buyMaxSoFar);

    }

    int helperBottomUp(vector<int>& prices, int N, int K) {

        vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0)); // base case handled in init

        for (int i = N - 1; i >= 0; i--) {
            for (int k = 1; k <= K; k++) {
                // dp[i][k] = f(i, k)

                // f(i,k) : find the maximum profit you can make by completing <=k transactions starting from the ith day

                // make a decision for the ith day

                // 1. do not buy the stock on the ith day

                int donotBuy = dp[i + 1][k];

                // 2. buy the stock on the ith day

                // decide the selling day

                int buyMaxSoFar = INT_MIN;

                for (int j = i + 1; j <= N - 1; j++) {

                    // sell the stock on the jth day which was bought on the ith day

                    buyMaxSoFar = max(buyMaxSoFar, prices[j] - prices[i] + dp[j + 1][k - 1]);

                }

                dp[i][k] = max(donotBuy, buyMaxSoFar);
            }
        }

        return dp[0][K]; // at the (0, K)th index we store f(0, K)


    }

    int maxProfit(int K, vector<int>& prices) {

        int N = prices.size();

        // return helper(prices, N, 0, K);

        return helperBottomUp(prices, N, K);

    }
};