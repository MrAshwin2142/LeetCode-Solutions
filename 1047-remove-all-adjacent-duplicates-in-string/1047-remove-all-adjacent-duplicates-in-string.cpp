class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for (char x:s){
            if(!st.empty()){
                if(st.top()==x) st.pop();
                else st.push(x);
            }
            else st.push(x);
        }
        string an="";
        while(!st.empty()){
            an.push_back(st.top());
            st.pop();
        }
       
        reverse (an.begin(),an.end());
        return an;
    }
};