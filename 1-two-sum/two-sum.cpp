class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int t=target-nums[i];
            if(mp.find(t)!=mp.end()) return {mp[t],i};
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};