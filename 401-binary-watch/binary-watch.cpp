class Solution {
public:
    int countbit(int n){
        int ans=0;
        while(n){
            ans+=n&1;
            n>>=1;
        }
        return ans;
    }
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        if(turnedOn>8) return ans;
        string temp;
        for(int i=0;i<12;i++){
            for(int j=0;j<=59;j++){
                if(countbit(i)+countbit(j)==turnedOn){
                    temp = to_string(i) + ':';
                    if(j==0) temp+="00";
                    else if(j<10) temp+='0'+to_string(j);
                    else temp+=to_string(j);
                    ans.push_back(temp);
                }
            }
        }
        return ans;
    }
};