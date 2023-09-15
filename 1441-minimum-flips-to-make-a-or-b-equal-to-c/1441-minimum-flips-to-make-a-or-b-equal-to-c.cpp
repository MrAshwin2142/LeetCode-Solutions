class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans=0;
        while(a>0 || b>0 || c>0){
            int bitA = a&1;
            int bitB = b&1;
            int bitC = c&1;
            if(bitC==0) ans+=bitA+bitB;
            else{
                if(bitA==0 && bitB==0) ans++;
            }
            c/=2;
            a/=2;
            b/=2;
        }
        return ans;
    }
};