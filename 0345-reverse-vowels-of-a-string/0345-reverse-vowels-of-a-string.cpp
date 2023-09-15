class Solution {
public:
bool isVowel(char c){
    if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='I'||c=='E'||c=='O'||c=='U') return true;
    return false;
}
    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            while(!isVowel(s[i]) && i<j) i++;
            while(!isVowel(s[j]) && i<j) j--;
            swap(s[i],s[j]);
            i++,j--;
        }
        return s;
    }
};