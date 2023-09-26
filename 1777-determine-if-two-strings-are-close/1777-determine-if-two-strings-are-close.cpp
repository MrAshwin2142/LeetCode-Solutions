class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> v1(26,0), v2(26,0);
        if(word1.size()!=word2.size()) return false;
        set<char> s1,s2;
        for(char i:word1) {
            s1.insert(i);
            v1[i-'a']++;
        }
        for(char i:word2){
            s2.insert(i);
            v2[i-'a']++;
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return s1==s2 && v1==v2;
    }
};