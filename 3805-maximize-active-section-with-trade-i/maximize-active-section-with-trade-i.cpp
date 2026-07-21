class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        vector<int> po;
        char j=s[0];
        int n=s.size();
        int count=1;
        int ans=0;
        for(int i=1;i<n;i++){
            if(s[i]==j) count++;
            else{
                if(j=='0') po.push_back(-1*count);
                else{
                    ans+=count;
                 po.push_back(count);
                }count=1;
                j=s[i];
            }
        }
        if(j=='0') po.push_back(-1*count);
        else{ po.push_back(count); ans+=count;}
        int si=po.size();
        int mx=0;
        for(int i=1;i<si-1;i++){
            if(po[i]>0){
                if(po[i-1]<0 && po[i+1]<0){
                    mx=max(mx,abs(po[i+1]+po[i-1]));
                }
            }
        }
        return ans+mx;

    }
};