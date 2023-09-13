class Solution {
public:
    void make(string &s){
        string a="";
        for(char i:s){
            if(i>=65 && i<=90) a+=(i+32);
            else if(i>=97 && i<=122) a+=i;
            else if(i>=48 &&i<=57) a+=i;
        }
        s=a;
    }
    bool isPalindrome(string s) {
        make(s);
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};