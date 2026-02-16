class Solution {
public:
    int reverseBits(int n) {
        int ans=0;
        for(int i=0;i<32;i++){
            ans=ans*2 + n%2;
            n=n/2;
        }
        return ans;
    }
};