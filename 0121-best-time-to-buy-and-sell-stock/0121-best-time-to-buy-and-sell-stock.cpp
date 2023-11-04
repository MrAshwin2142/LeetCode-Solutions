class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mx=0;
        int ans=0;
        int n=p.size();
        for(int i=n-1;i>=0;i--){
            mx=max(mx,p[i]);
            ans=max(ans,mx-p[i]);
        }
        return ans;
    }
};