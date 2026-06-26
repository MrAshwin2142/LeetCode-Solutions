class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                mp[s[j]]++;
                if(mp[s[j]]>1) break;
                ans=max(ans,j-i+1);
            }
            mp.clear();
        }
        return ans;
    }
};