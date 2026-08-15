class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string t="";
        for(char i:s){
            if(i==' '){if( t!="") {v.push_back(t);t="";}}
            else t+=i;
        }
        if(  t!="") {v.push_back(t);t="";}
        reverse(v.begin(),v.end());
        int n=v.size();
        if(n==0) return "";
        string ans=v[0];
        for(int i=1;i<n;i++){
            ans+=' '+v[i];
        }
        return ans;
    }
};