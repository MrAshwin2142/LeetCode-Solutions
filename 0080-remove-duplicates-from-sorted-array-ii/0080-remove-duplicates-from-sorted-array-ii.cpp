class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        if(n<3) return n;
        map<int,int> mp;
        for(int i:nums) mp[i]++;
        int j=0;
        for(auto i:mp){
            nums[j++]=i.first;
            if(i.second>1) nums[j++]=i.first;
        }
        return j;
    }
};