class Solution {
public:
    int maximumLength(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums) mp[i]++;
        int ans= mp[1]-(mp[1]%2==0);
        for(int i:nums){
            int count=1;
            if(i==1) continue;
            while(mp[pow(i,0.5)]>1){
                if(pow(i,0.5)*pow(i,0.5)!=i) break;
                count+=2;
                i=pow(i,0.5);
            }
            ans=max(ans,count);
        }
        return ans;
    }
};