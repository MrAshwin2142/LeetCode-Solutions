class Solution {
public:
    int countbit(int n){
        int bit=0;
        while(n){
            bit =  bit +(n&1);
            n=n>>1;
        }
        return bit;
    }
    bool isprime(int n){
        if(n==1) return false;
        for(int i=2;n>=i*i;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++){
            if(isprime(countbit(i))) {
                ans++;
                // cout<<i<<countbit(i)<<endl;
            }
        }
        return ans;
    }
};