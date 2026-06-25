class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int ans=0,n=nums.size();
        for(int i=0;i<n;i++){
            map<int,int> mp;
            for(int j=i;j<n;j++){
                mp[nums[j]]++;
                if(mp[target]>(j-i+1)/2) ans++;
            }
        }
        return ans;
    }
};