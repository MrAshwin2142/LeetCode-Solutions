class Solution {
public:
     bool check(char s){
    set<char> st;
         st={'a','e','i','o','u','A','E','I','O','U'};
         return (st.find(s)!=st.end());
     }
    string reverseVowels(string s) {
        
        int r=0,l=s.size()-1;
        while(r<l){
            if(check(s[r]) && check(s[l])){
                swap(s[l],s[r]);
                r++;
                l--;
            }
            else if(!check(s[l])) l--;
            else if(!check(s[r])) r++;
        }
        return s;
    }
};