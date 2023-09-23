class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> rsum(n,0);
        rsum[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            rsum[i]=rsum[i+1]+nums[i];
        }
        int sum=0;
        for(int i=0;i<n-1;i++){
            if(sum==rsum[i+1]) return i;
            sum+=nums[i];
        }
        if(sum==0) return n-1;
        return -1;
    }
};