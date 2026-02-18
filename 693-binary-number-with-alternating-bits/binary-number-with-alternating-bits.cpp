class Solution {
public:
    bool hasAlternatingBits(int n) {
        int b=n%2;
        n>>=1;
        while(n){
            if(n%2==b) return false;
            b=n%2;
            n>>=1;
        }
        return true;
    }
};