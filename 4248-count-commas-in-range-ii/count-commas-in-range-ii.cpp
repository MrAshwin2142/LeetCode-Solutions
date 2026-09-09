class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        if(n<1000000) return n-999;
        if(n<1000000000) return (n-999) + (n-999999);
        if(n<1000000000000) return (n-999) + (n-999999) + (n-999999999);
        if(n<1000000000000000) return (n-999) + (n-999999) + (n-999999999) + (n-999999999999);
        return (n-999) + (n-999999) + (n-999999999) + (n-999999999999)+1;
    }
};