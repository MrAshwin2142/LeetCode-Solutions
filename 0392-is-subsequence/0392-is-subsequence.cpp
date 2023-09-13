class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        if(n==0) return true;
        int i=0;
        for(char c:t){
            if(c==s[i]) i++;
            if(i==n) return true;
        }
        return false;
    }
};