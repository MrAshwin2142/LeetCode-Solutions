class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int k=j+1;
                int l=nums.size()-1;
                while(k<l){
                    double sum=(0.0 +nums[i]+nums[j]+nums[k]+nums[l]-target);
                    if(sum>0) l--;
                    else if(sum<0) k++;
                    else{
                        ans.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                        
                    }
                }
            }
        }
        vector<vector<int>> p(ans.begin(),ans.end());
        return p;
    }
};