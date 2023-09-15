class Solution {
public:
    int compress(vector<char>& chars) {
        int ans=0;
        char c=chars[0];
        int count=0;
        string s="";
        int n=chars.size();
        for(char i:chars){
            if(c==i) count++;
            else {
                s+=c;
                if(count>1) s+=to_string(count);
                count=1;
                c=i;
            }
        }
        s+=chars[n-1];
        if(count>1) s+=to_string(count);
        for(int i=0;i<s.size();i++) chars[i]=s[i];
        return s.size();
    }
};