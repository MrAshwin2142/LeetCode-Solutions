class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        int sum = (n*(n+1))/2;
        int s=1;
        for(int i=2;i<=n;i++){
            s+=i;
            if(sum-s == s-i) return i;
        }
        return -1;
    }
};