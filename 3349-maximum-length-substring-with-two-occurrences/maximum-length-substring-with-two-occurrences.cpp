class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int j=0;
        int ans=0;
        vector<int> v(26,0);
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
            while(v[s[i]-'a']>2){
                v[s[j]-'a']--;
                j++;
            }
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};