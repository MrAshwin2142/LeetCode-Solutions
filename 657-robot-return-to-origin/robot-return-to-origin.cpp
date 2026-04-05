class Solution {
public:
    bool judgeCircle(string m) {
        int u=0,r=0;
        for(char i:m){
            if(i=='U') u++;
            if(i=='D') u--;
            if(i=='R') r++;
            if(i=='L') r--;
        }
        return u==0 && r==0;
    }
};