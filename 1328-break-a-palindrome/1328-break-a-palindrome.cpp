class Solution {
public:
    string breakPalindrome(string p) {
        int f=0;
        if(p.size()==1) return "";
        for(int i=0;i<p.size()/2;i++){
            if(p[i]!='a'){
                f=1;
                p[i]='a';
                break;
            }
        }
        if(f==0) p[p.size()-1]='b';
        return p;
    }
};