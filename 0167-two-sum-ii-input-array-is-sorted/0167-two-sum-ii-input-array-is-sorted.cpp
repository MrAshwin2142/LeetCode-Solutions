class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int i=0;
        int j=n.size()-1;
        vector<int> ans(2,0);
        while(i<j){
            if(n[i]+n[j]==t) return {++i,++j};
            if(n[i]+n[j]>t) j--;
            else i++;
        }
        return ans;
    }
};