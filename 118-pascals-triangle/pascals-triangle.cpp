class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        ans.push_back({1});
        if(n==1) return ans;
        ans.push_back({1,1});

        for(int i=2;i<n;i++){
            vector<int> t;
            t.push_back(1);
            for(int j=1;j<i;j++){
                t.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
            t.push_back(1);
            ans.push_back(t);
        }
        return ans;
    }
};