class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        if(n==2) return nums[0] || nums[1];
        vector<int> vl(n,0),vr(n,0);
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1) c++;
            else c=0;
            vl[i]=c;
        }
        c=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]==1) c++;
            else c=0;
            vr[i]=c;
        }
        c=0;
        if(n==3) c=nums[1];
        for(int i=1;i<n-1;i++){
            int t=vr[i+1] + vl[i-1];
            c=max(c,t);
        }
        c = max(c,vr[1]);
        c = max(c,vl[n-2]);
        return c;
    }
};