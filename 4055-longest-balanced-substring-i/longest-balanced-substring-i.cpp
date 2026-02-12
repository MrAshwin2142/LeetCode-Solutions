class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size();
        map<int,int> mp1;
        int mx=0;
        for(int i=0;i<n;i++){
            map<char,int> mp;
            for(int j=i;j<n;j++){
                mp[s[j]]++;
                int b=1;
                int f=mp.begin()->second;
                for(auto p:mp){
                    if(p.second!=f){
                        b=0;
                        break;
                    }
                }
                if(b) mx=max(mx,j-i+1);
            }
        }
        return mx;
    }
};