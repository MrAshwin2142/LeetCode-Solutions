class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        int o=0,c=0;
        for(char c:s){
            if(c=='('){
                if(o) ans+='(';
                o++;
            }else{
                if(o>1) ans+=')';
                o--;
            }
        }
        return ans;
    }
};