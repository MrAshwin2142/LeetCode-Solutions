class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=nums[0];
        int sum=0;
        for(int i:nums){
            if(sum<0) sum=0;
            sum+=i;
            mx=max(sum,mx);
        }
        return mx;
    }
};