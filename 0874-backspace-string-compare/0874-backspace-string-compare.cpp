class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> c1,c2;
        for(char i:s){
            if(!c1.empty() && i=='#') c1.pop();
            else if(i!='#') c1.push(i);
        }
        for(char i:t){
            if(!c2.empty() && i=='#') c2.pop();
            else if(i!='#') c2.push(i);
        }
        return c1==c2;
    }
};