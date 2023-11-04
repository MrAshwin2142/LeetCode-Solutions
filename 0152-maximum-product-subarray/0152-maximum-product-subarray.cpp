class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=INT_MIN;
        int ml=1;
        for(int i:nums){
            ml*=i;
            ans=max(ans,ml);
            if(ml==0) ml=1;
        }
        ml=1;
        for(int i=nums.size()-1;i>=0;i--){
            ml*=nums[i];
            ans=max(ans,ml);
            if(ml==0) ml=1;
        }
        return ans;
    }
};