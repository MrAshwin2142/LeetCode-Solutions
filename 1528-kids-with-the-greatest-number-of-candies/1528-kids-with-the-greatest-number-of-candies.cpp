class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int mx=c[0];
        for(int i:c) mx=max(mx,i);
        vector<bool> ans;
        for(int i:c){
            ans.push_back(i+e>=mx);
        }
        return ans;
    }
};