class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        int ans=nums[0];
        for(int i=0;i<n-1;i++){
            ans--;
            ans=max(ans,nums[i]);
            if(ans<=0) return false;
            
        }
        return true;;
    }
};