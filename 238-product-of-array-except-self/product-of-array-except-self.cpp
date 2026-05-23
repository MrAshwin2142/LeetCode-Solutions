class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int zero=0;
        long long prod=1;
        for(int i:nums){
            if(i==0) zero++;
            else prod*=i;
            if(zero==2) return ans;

        }
        for(int i=0;i<n;i++){
            if(nums[i]==0) ans[i]=prod;
            else if(zero) ans[i]=0;
            else ans[i]=prod/nums[i];
        }
        return ans;
    }
};