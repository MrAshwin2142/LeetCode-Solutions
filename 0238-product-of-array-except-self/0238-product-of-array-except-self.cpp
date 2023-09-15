class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long p=1;
        int n=nums.size();
        vector<int> ans(n,1);
        for(int i=0;i<n;i++){
            ans[i]*=p;
            p*=nums[i];
        }
        p=1;
        for(int i=n-1;i>=0;i--){
            ans[i]*=p;
            p*=nums[i];
        }
        return ans;
    }
};