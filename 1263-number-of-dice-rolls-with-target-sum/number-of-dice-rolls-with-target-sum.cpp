class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(32, vector<int>(target + 1, 0));
        
        int mod = 1e9 + 7;
        
        dp[0][0] = 1;
        
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= target; j++) {
                for(int x = 1; x <= k && j - x >= 0; x++) {
                    dp[i][j] += dp[i - 1][j - x];
                    dp[i][j] = dp[i][j] % mod;
                }
            }
        }
        
        return dp[n][target];
    }
};