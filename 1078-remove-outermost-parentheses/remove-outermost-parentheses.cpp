class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
        stack<char> st;
        for(char i:s){
            if(st.empty()){
                st.push(i);
                continue;
            }
            if(i==')'){
                if(st.size()>1) ans+=i;
                st.pop(); 
            }else {
                st.push(i);
                ans+=i;
            }
        }
        return ans;
    }
};