class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(char x:s) mp[x]++;
        vector<pair<int,char>> v;
        for(auto x:mp) v.push_back({x.second,x.first});
        sort(v.begin(),v.end());
        string ans;
        for(auto x:v){
            while(x.first--) ans.push_back(x.second);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};