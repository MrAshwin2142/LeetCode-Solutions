class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n,INT_MAX);
        v[0]=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n && j<=i+nums[i];j++){
                v[j] = min(v[j],v[i]+1);
            }
        }
        return v[n-1];
    }
};