class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0,j=0,ans=0;
        int n=s.size();
        unordered_map<char,int>mp;
        while(j<s.size()){
            mp[s[j]]++;
            while(mp.size()==3){
                ans+=(n-j);
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};