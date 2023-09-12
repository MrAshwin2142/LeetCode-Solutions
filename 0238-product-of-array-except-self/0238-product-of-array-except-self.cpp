class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero=0;
        int n= nums.size();
        long long pr=1;
        vector<int> v(n,0);
        for(int i:nums){
            if(i!=0) pr*=i;
            else zero++;
        }
        if(zero>1) return v;
        if(zero==1){
            for(int i=0;i<n;i++){
                if(nums[i]==0) v[i]=pr;
            }
        }
        else{
            for(int i=0;i<n;i++){
                v[i]=pr/nums[i];
            }
        }
        return v;
    }
};