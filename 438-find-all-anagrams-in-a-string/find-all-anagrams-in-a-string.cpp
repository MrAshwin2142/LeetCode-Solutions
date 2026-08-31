class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<int> ans;
        if(m>n) return ans;
        vector<int> fs(26,0),fp(26,0);
        int j=0,i=0;
        for(;i<m;i++){
            fs[s[i]-'a']++;
            fp[p[i]-'a']++;
        }
        if(fs==fp) ans.push_back(0);
        for(;i<n;i++){
            fs[s[j++]-'a']--;
            fs[s[i]-'a']++;
            if(fs==fp) ans.push_back(j);
        }
        return ans;
    }
};