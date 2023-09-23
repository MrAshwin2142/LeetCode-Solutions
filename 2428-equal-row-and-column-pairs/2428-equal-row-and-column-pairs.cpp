class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int> mp;
        int n=grid.size();
        for(auto i:grid){
            mp[i]++;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
                temp.push_back(grid[j][i]);
            }
            ans+=mp[temp];
        }
        return ans;
    }
};