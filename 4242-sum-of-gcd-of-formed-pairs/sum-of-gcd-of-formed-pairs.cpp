class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx=nums[0];
        int n=nums.size();
        nums[0]=gcd(mx,nums[0]);
        for(int i=1;i<n;i++){
            mx=max(nums[i],mx);
            nums[i]=gcd(mx,nums[i]);
        }
        sort(nums.begin(),nums.end());
        long long sum=0;
        for(int i=0;i<n/2;i++){
            sum+=gcd(nums[i],nums[n-i-1]);
        }
        return sum;
    }
};