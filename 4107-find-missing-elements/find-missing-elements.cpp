class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int n=nums.size();
        set<int> s;
        for(int i:nums) s.insert(i);
        for(int i=nums[0];i<nums[n-1];i++){
            if(s.find(i)==s.end()) ans.push_back(i);
        }
        return ans;
    }
};