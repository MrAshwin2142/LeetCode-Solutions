class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p,n;
        for(int i:nums){
            if(i<0) n.push_back(i);
            else p.push_back(i);
        }
        vector<int> ans;
        for(int i =0;i<nums.size()/2;i++){
            ans.push_back(p[i]);
            ans.push_back(n[i]);
        }
        return ans;
    }
};