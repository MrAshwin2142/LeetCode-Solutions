class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero=0;
        long long mul=1;
        for(int i:nums){
            if(i==0){
                zero++;
            }else{
                mul*=i;
            }
        }
        int n=nums.size();
        vector<int> v(n,0);
        if(zero>1) return v;
        if(zero==1){
            for(int i=0;i<n;i++){
                if(nums[i]==0)  v[i]=mul;
            }
        }else{
            for(int i=0;i<n;i++){
                v[i]=mul/nums[i];
            }
        }
        return v;
    }
};