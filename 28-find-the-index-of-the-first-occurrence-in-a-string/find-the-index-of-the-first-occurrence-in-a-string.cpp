class Solution {
public:
    int strStr(string h, string n) {
        if(h==n) return 0;
        int ans=0;
        int nn=h.size();
        int m=n.size();
        for(int i=0;i<=nn-m;i++){
            bool mt=true;
            for(int j=0;j<m;j++){
                if(h[i+j]!=n[j]) mt=false;
            }
            if(mt) return i;
        }
        return -1;
    }
};