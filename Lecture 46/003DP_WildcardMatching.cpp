/*

    https://leetcode.com/problems/wildcard-matching/

*/

class Solution {
public:

    bool helper(string s, string p, int m, int n, int i, int j) {

        // base case

        if (i == m) {

            // s[] is empty

            // check if p[j...n-1] matches s[m...m-1] = ""

            bool flag = true; // assume p[j...n-1] contains all *

            for (int k = j; k <= n - 1; k++) {
                if (p[k] != '*') {
                    flag = false;
                    break;
                }
            }

            return flag;

        }

        if (j == n) { // i != m

            // check if p[n...n-1] = "" matches s[i...m-1] (non-empty)
            return false;

        }

        // recursive case

        // check if p[j...n-1] matches s[i...m-1]

        // if (p[j] == s[i]) {
        //     return helper(s, p, m, n, i + 1, j + 1);
        // } else {
        //     if (p[j] == '?') {
        //         return helper(s, p, m, n, i + 1, j + 1);
        //     } else if (p[j] == '*') {
        //         return helper(s, p, m, n, i + 1, j) or helper(s, p, m, n, i, j + 1);
        //     } else {
        //         return false;
        //     }
        // }

        // if (p[j] == s[i] || p[j] == '?') {
        //     return helper(s, p, m, n, i + 1, j + 1);
        // } else if (p[j] == '*') {
        //     return helper(s, p, m, n, i + 1, j) or helper(s, p, m, n, i, j + 1);
        // } else {
        //     return false;
        // }


        if (p[j] == s[i] || p[j] == '?') {
            return helper(s, p, m, n, i + 1, j + 1);
        } else if (p[j] == '*') {
            return helper(s, p, m, n, i + 1, j) or helper(s, p, m, n, i, j + 1);
        }

        return false;

    }

    bool helperBottomUp(string s, string p, int m, int n) {

        vector<vector<bool>> dp(m + 1, vector < bool>(n + 1) );

        // base case

        for (int j = 0; j < n; j++) {

            // dp[m][j] = f(m, j) = check p[j...n-1] matches s[m...m-1] = ""

            bool flag = true; // assume p[j...n-1] contains all *

            for (int k = j; k <= n - 1; k++) {
                if (p[k] != '*') {
                    flag = false;
                    break;
                }
            }

            dp[m][j] = flag;
        }

        for (int i = 0; i < m; i++) {
            dp[i][n] = false;
        }

        dp[m][n] = true;

        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                // dp[i][j] = f(i, j) = check if p[j...n-1] matches s[i...m-1]
                if (p[j] == s[i] || p[j] == '?') {
                    dp[i][j] = dp[i + 1][j + 1];
                } else if (p[j] == '*') {
                    dp[i][j] = dp[i][j + 1] or dp[i + 1][j];
                } else {
                    dp[i][j] = false;
                }
            }
        }

        return dp[0][0];


    }

    bool isMatch(string s, string p) {

        int m = s.size();
        int n = p.size();

        // return helper(s, p, m, n, 0, 0);

        return helperBottomUp(s, p, m, n);

    }
};