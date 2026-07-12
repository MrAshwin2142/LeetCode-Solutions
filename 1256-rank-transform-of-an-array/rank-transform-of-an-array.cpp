class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> mp;
        for(int i:arr) mp[i]++;
        int j=1;
        for(auto i:mp){
            int a=i.first;
            mp[a]=j++;
        }
        vector<int> ans;
        for(int i:arr) ans.push_back(mp[i]);
        return ans;
    }
};