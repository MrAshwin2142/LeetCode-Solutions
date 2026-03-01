class Solution {
public:
    void perms(int i,vector<vector<int>>& res,vector<int>& nums){
        if(i==nums.size()){
            res.push_back(nums);
            return;
        }

        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            perms(i+1,res,nums);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        perms(0,res,nums);
        return res ;
    }
};