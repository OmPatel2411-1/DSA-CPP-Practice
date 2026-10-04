class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n = nums.size();

        vector<int> a(n + 2, 1);
        for (int i = 0; i < n; i++) {
            a[i + 1] = nums[i];
        }

        vector<vector<int>> dp(n + 2, vector<int>(n + 2, 0));

        for (int len = 1; len <= n; len++) {
            for (int left = 1; left + len - 1 <= n; left++) {
                int right = left + len - 1;

                for (int k = left; k <= right; k++) {
                    int coins = a[left - 1] * a[k] * a[right + 1];

                    coins += dp[left][k - 1];
                    coins += dp[k + 1][right];

                    dp[left][right] = max(dp[left][right], coins);
                }
            }
        }

        return dp[1][n];
    }
};
