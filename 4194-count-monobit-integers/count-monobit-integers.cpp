class Solution {
public:
    int countMonobit(int n) {
        if(n==0) return 1;
        int ans = log2(n)+1;
        if(n==pow(2,ans)-1) ans++;
        return ans;
    }
};