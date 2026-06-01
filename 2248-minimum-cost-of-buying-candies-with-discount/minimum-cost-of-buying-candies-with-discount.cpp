class Solution {
public:
    int minimumCost(vector<int>& c) {
        sort(c.begin(),c.end());
        int ans=0;
        int n=c.size();
        for(int i=n-1;i>=0;){
            if(i>=0) ans+=c[i--];
            if(i>=0) ans+=c[i--];
            i--;
        }
        return ans;
    }
};