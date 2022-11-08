class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(char c:s){
            if(st.empty() || (st.top()!=c+32 && st.top()!=c-32)) st.push(c);
            else st.pop();
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};