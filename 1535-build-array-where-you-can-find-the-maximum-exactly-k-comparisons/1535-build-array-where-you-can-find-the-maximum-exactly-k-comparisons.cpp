class Solution {
public:
   long long dp[51][102][102]; // Memoization table
   int mod=1e9+7;
   
   // Recursive function to calculate the number of arrays
   long long solve(int m, int k, int c, int n, int mx, int id) {
         // If we have filled the array with n elements and found that the max is found at id operation and is equal to k.
         // return 1 (valid array), otherwise return 0.
         if (c == n) {
             if (id == k) {
                 return 1;
             }
             return 0;
         }
         
         // If this subproblem has already been solved, return the memoized result.
         if (dp[c][mx+1][id] != -1)
             return dp[c][mx+1][id];
         
         long long ans = 0;
         
         for (int i = 1; i <= m; i++) {
             int c1 = mx;
             int c2 = id;
             
             // If the current element (i) is greater than the maximum element seen so far (mx),
             // we increment both mx and id because we have a new maximum and cost.
             if (mx < i) {
                 c1 = i;
                 c2 = id + 1;
             }
             
             // Recursively calculate the number of arrays by considering element i.
             ans = (ans + solve(m, k, c+1, n, c1, c2)) % mod;
         }
         
         // Memoize the result and return it.
         return dp[c][mx+1][id] = (ans) % mod;
    }
    
    int numOfArrays(int n, int m, int k) {
        memset(dp, -1, sizeof(dp)); // Initialize the memoization table with -1.
        return solve(m, k, 0, n, -1, 0); // Start the recursive calculation.
    }
};