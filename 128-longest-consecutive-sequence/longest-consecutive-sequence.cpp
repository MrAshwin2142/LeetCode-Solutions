class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st(nums.begin(),nums.end());
        int ans=0;
        for(int i:st){
            int cur=i;
            int len =1;
            if(st.find(i-1)==st.end()){
                while(st.find(cur+1)!=st.end()){
                    len++;
                    cur++;
                }
            }
            ans=max(len,ans);
        }
        return ans;
    }
};