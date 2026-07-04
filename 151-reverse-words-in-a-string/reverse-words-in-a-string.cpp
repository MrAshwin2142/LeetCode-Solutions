class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        reverse(s.begin(),s.end());
        string temp="";
        for(char i:s){
            if(i==' ' && temp.size()>0){
                reverse(temp.begin(),temp.end());
                ans+=temp+' ';
                temp="";
            }else if(i!=' ') temp+=i;
        }
        if(temp.size()>0){
                reverse(temp.begin(),temp.end());
                ans+=temp;
                temp="";
        }if(ans[ans.size()-1]==' ') ans.pop_back();
        return ans;
    }
};