class Solution {
public:
    bool isVowel(char x){
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o'
        || x == 'u' || x == 'A' || x == 'E' || x == 'I'
        || x == 'O' || x == 'U') return true;
        return false;
    }
    string sortVowels(string s) {
        vector<int> v;
        for(int i:s){
            if(isVowel(i)) v.push_back(i);
        }
        sort(v.begin(),v.end());
        int j=0,n=s.size();
        for(int i=0;i<n;i++){
            if(isVowel(s[i])) s[i]=v[j++];
        }
        return s;
    }
};