class Solution {
public:
    int mirrorDistance(int n) {
        int org=n;
        int rev=0;
        while(n){
            int t=n%10;
            rev=rev*10 + t;
            n/=10;
    }
        return abs(org-rev);
    }
};