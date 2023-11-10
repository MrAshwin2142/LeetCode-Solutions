class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& a) {
        map<int,set<int>> mp;
        int n=a.size();
        vector<int> ans(n+1,INT_MAX);
        for(auto i:a){
            mp[i[0]].insert(i[1]);
            mp[i[1]].insert(i[0]);
        }
        for(auto i:mp){
            if(i.second.size()==1){
                if(ans[0]==INT_MAX) ans[0]=i.first;
                else ans[n]=i.first;
            }
        }
        for(int i=1;i<=n;i++){
            int t=ans[i-1];
            for(int k:mp[t]){
                ans[i]=k;
                mp[k].erase(t);
            }
        }
        return ans;
    }
};