class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        int sign=false;
        if(dividend<0 && divisor>0) sign=true;
        if(dividend>=0 && divisor<0) sign=true;
        long long n=abs((long long)dividend),d=abs((long long)divisor);
        long long ans=0;
        while(n>=d){
            long long c=0;
            while(n>d*((long long)1<<(c+1))) c++;
            n-=(d*(1<<c));
            ans+=(1<<c);
        }
        if(sign) return -1*ans;
        if(ans>INT_MAX) return INT_MAX;
        if(ans<INT_MIN) return INT_MIN;
        return ans;
    }
};