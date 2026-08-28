class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=INT_MIN;
        int sum=0;
        int ans=0;
        for(int i:nums){
            sum+=i;
            if(sum<0){
                sum=0;
            }
            ans=max(sum,ans);
            mx=max(mx,i);
        }
        if(ans==0) return mx;
        return ans;
    }
};