class Solution {
public:
    bool checkIfPangram(string s) {
      set<char> ch;
        for(char x: s) ch.insert(x);
        return (ch.size()==26);
    }
};