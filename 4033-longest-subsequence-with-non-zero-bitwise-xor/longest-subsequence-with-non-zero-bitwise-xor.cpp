class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int xr=0;
        sort(nums.begin(),nums.end());
        if(nums[n-1]==0) return 0;
        for(int i=0;i<n;i++){
            xr=xr^nums[i];
        }
        if(xr==0) return n-1;
        return n;
    }
};