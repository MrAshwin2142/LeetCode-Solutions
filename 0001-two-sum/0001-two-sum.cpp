class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int s=t-nums[i];
            if(mp.find(s)!=mp.end()) return {mp[s],i};
            mp[nums[i]]=i;

        }
        return {};
    }
};