class Solution {
public:
    int dp(int num){
        int prod=1;
        while(num){
            prod*=num%10;
            num/=10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;i<n*t;i++){
            if(dp(i)%t==0) return i;
        }
        return n*t;
    }
};