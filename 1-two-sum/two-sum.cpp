class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target) return {i,j};
        //     }
        // }
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int dif = target - nums[i];
            if(mp.find(dif)!=mp.end()){
                return {i,mp[dif]};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};