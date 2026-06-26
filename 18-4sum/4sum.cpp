class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                double need = 0.0+target -nums[i]-nums[j];
                int a=j+1,b=n-1;
                while(a<b){
                    if(need-nums[a]-nums[b]==0){ 
                        st.insert({nums[i],nums[j],nums[a],nums[b]}); a++;}
                    else if(need-nums[a]-nums[b]>0) a++;
                    else b--;
                }
            }
        }
        for(auto i:st) ans.push_back(i);
        return ans;
    }
};