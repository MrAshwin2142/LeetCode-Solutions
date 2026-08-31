class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k==1) return 1;
        if(k%2==0 || k==5) return -1;
        int r=0;
        for(int i=1;i<100000;i++){
            r=(r*10+1)%k;
            if(r==0) return i;
        }
        return -1;
    }
};