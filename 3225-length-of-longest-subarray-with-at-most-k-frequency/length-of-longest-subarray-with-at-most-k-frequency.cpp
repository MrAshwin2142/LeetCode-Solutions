class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int ans=0;
        map<long long,int> mp;
        while(i<n && j<n){
            int t=nums[j++];
            mp[t]++;
            if(mp[t]>k){
                while(mp[t]!=k && i<n){
                    mp[nums[i]]--;
                    i++;
                }
            }
            ans=max(ans,j-i);
        }
        return ans;
    }
};