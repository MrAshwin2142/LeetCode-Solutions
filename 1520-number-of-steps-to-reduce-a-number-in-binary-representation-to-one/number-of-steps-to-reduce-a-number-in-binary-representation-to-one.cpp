class Solution {
public:
    int numSteps(string s) {
        int n=s.size(), div=n-1, add1=0, carry=0, cnt1=0;
        for(int i=n-1; i>0; i--){
            while(i>0 && (s[i]-'0'+carry)&1){
                carry|=s[i]=='1';
                cnt1++;
                i--;
            }
            add1+=cnt1;
            cnt1=0;
            carry|=s[i]=='1';
        }
        return div+add1+carry;
    }
};