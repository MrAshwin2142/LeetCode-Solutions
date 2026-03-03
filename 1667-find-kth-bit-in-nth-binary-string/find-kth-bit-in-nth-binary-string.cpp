class Solution {
public:
    string rvs(string s){
        string t=s;
        reverse(t.begin(),t.end());
        return t;
    }
    string invrt(string s){
        string t="";
        for(char i:s){
            if(i=='0') t+='1';
            else t+='0';
        }
        return t;
    }
    char findKthBit(int n, int k) {
        string s="0";
        for(int i=1;i<n;i++){
            s=s+"1"+rvs(invrt(s));
        }
        cout<<s;
        return s[k-1];
    }
};