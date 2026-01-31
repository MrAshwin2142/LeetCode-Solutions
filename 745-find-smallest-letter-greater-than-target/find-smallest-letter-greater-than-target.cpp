class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char t) {
        char ans=' ';
        for(char i:letters){
            if(i>t){
                if(ans==' ') ans=i;
                else if(i<ans) ans=i;
            }
        }
        return ans==' '?letters[0]:ans;
    }
};