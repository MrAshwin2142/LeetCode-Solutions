class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        for(;i<n;i++){
            if(nums[i]!=0){
                nums[j++]=nums[i];
            }
        }
        for(;j<n;j++){
            nums[j]=0;
        }
    }
};