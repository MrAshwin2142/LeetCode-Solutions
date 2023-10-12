class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int n=chars.size();
        if(n==1) return 1;
        for(int j=1,count=1;j<=n;j++,count++){
            if(j==n  || chars[j-1]!=chars[j]){
                chars[i++] = chars[j-1];
                if(count>1){
                    for(int k:to_string(count)){
                        chars[i++]=k;
                    }
                }
                count=0;
            }
        }
        return i;
    }
};