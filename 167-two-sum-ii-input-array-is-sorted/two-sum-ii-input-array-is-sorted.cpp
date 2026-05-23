class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1;
        while(i<j){
            int sum = nums[i]+nums[j];
            if(sum==target) return {i+1,j+1};
            if(sum<target) i++;
            if(sum>target) j--;
        }
        return {-1,-1};
    }
};