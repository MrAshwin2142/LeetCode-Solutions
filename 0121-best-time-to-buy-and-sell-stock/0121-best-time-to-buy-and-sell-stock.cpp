class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        int mxp=0;
        int buy=p[0];
        for(int i=1;i<n;i++){
            mxp=max(mxp,p[i]-buy);
            buy = min(buy,p[i]);
        }
        return mxp;
    }
};