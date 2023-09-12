class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        map<int,vector<int>> mp;
        int n=g.size();
        for(int i=0;i<n;i++){
            mp[g[i]].push_back(i);
        }
        vector<vector<int>> ans;
        for(auto i:mp){
            if(i.first==i.second.size()) ans.push_back(i.second);
            else{int t=i.second.size()/i.first;
            vector<int> v(i.first);
            int k=0;
            for(int j=0;j<i.second.size();j++){
                v[k++]=i.second[j];
                if(k==i.first){
                    ans.push_back(v);
                    k=0;
                }
            }
            // ans.push_back(v);
            }
        }
        return ans;
    }
};