class Solution {
public:
    int countHomogenous(string s) {
        long long ans=0;
        long long mod=1000000007;
        int c=1;
        int el=s[0];
        int n=s.size();
        for(int i=1;i<n;i++){
            ans+=c;
            ans=ans%mod;
            if(el==s[i]) c++;
            else {
                el=s[i];
                c=1;
            }
        }
        ans+=c;
        return ans%mod;
    }
};