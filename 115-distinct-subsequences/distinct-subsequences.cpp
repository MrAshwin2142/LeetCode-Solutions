class Solution {
public:
    int help(auto&v,string& s,string& t,int i,int j){
        if(v[i][j]!=-1) return v[i][j];
        if(i==s.size() && j==t.size()) return 1;
        if(i>=s.size()) return 0;
        int nt = help(v,s,t,i+1,j);
        int take=0;
        if(s[i]==t[j]) take = help(v,s,t,i+1,j+1);
        return v[i][j]=take+nt;
    }
    int numDistinct(string s, string t) {
    int n=s.size(),m=t.size();
    vector<vector<int>> v(n+1,vector<int>(m+1,-1));
    if(m>n) return 0;
    if(m==n && s==t) return 1;
    return help(v,s,t,0,0);
    }
};