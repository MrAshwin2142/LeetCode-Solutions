class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int m=0,s=0,e=n-1;
        while(m<=e){
            if(nums[m]==1) m++;
            else if(nums[m]==0){
                swap(nums[s],nums[m]);
                s++;
                m++;
            }
            else{
                swap(nums[e],nums[m]);
                e--;
            }
        }
    }
};