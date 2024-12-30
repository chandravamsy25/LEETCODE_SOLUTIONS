class Solution {
public:

    const int MOD = 1000000007;

    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high+1, 0);

        dp[0] = 1;
        for (int i=0; i<=high; i++) {
            if (i + zero <= high) {
                dp[i + zero] = (dp[i+zero] + dp[i]) % MOD;
            }
            if (i + one <= high) {
                dp[i + one] = (dp[i + one] + dp[i]) % MOD;
            }
        }

        long long sum = accumulate(dp.begin() + low, dp.begin() + high + 1, 0LL);
        return sum % MOD;
    }
};