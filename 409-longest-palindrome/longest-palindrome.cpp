class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;
        int ans=0;
        for(char  i:s) mp[i]++;
        int od=0;
        for(auto i:mp){
            if(i.second%2==0) ans+=i.second;
            else{
                od=1;
                ans+=i.second-1;
            }
        } 
        return ans+od;
    }
};