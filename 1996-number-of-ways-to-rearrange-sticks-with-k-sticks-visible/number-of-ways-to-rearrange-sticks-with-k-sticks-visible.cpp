class Solution {
public:
    int rearrangeSticks(int n, int k) {
        const int MOD = 1e9 + 7;
        vector<vector<long long>> dp(n + 1, vector<long long>(k + 1, 0));
        dp[0][0] = 1;
        for (int i = 1; i <= n; i++) 
            for (int j = 1; j <= k; j++) 
                dp[i][j] = (dp[i-1][j-1] + (long long)(i-1) * dp[i-1][j]) % MOD;
        
        return (int)dp[n][k];
    }
};