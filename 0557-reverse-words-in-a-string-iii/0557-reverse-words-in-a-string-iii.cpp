class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string t="";
        for(char i:s){
            if(i==' '){
                reverse(t.begin(),t.end());
                ans+=t;
                ans+=' ';
                t="";
            }else t+=i;
        }
        reverse(t.begin(),t.end());
        ans+=t;
        return ans;
    }
};