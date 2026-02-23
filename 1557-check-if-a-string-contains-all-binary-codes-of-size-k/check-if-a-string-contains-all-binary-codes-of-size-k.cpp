class Solution {
public:
    bool hasAllCodes(string s, int k) {
       set<string> st;
       int n=s.size();
       string temp="";
       for(int i=0;i<k &&i<n;i++) temp+=s[i];
       st.insert(temp);
       for(int i=k;i<n;i++){
        temp.erase(0,1);
        temp+=s[i];
        st.insert(temp);
       }
       return st.size()==1<<k;
    }
};