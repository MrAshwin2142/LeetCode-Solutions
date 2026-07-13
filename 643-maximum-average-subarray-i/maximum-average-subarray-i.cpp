class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++) sum+=nums[i];
        int mx=sum;
        int n=nums.size();
        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];
            mx=max(sum,mx);
        }
        return double(mx)/double(k);
    }
};