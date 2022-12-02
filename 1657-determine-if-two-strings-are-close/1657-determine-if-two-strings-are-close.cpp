class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        set<char> s1,s2;
        vector<int> m1(26,0),m2(26,0); 
        for(char x:word1){
            s1.insert(x);
            m1[x-'a']++;
        }
        for(char x:word2) {
            s2.insert(x);
            m2[x-'a']++;
        }
        sort(m1.begin(),m1.end());
        sort(m2.begin(),m2.end());
        return (s1==s2 && m1==m2);
    }
};