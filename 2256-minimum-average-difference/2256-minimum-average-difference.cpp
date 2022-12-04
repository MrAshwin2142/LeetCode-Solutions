class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        
        vector<long long> pre_sum(n);
        pre_sum[0]=nums[0];
        for(int i=1;i<n;i++){
            pre_sum[i]=pre_sum[i-1]+nums[i];
        }
        
        int mn=INT_MAX;
        int ind=0;
        for(int i=1;i<n;i++){
            int left=pre_sum[i-1]/i;
            int right=(pre_sum[n-1]-pre_sum[i-1])/(n-i);
            if(abs(left-right)<mn){
                ind=i-1;
                mn=abs(left-right);
            }
        }
        if(pre_sum[n-1]/n<mn) ind=n-1;
        return ind;
    }
};