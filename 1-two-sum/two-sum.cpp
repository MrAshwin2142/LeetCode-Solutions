class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int temp=target - nums[i];
            if(mp.count(temp)) return {mp[temp],i};
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};