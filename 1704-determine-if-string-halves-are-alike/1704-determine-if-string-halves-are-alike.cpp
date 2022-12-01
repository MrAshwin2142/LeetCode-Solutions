class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int a=0,b=0;
        set<char> v={'a','e','i','o','u','A','E','O','U','I'};
        for(int i=0;i<n/2;i++){
            if(v.find(s[i])!=v.end()) a++;
            if(v.find(s[n-i-1])!=v.end()) b++;
        }       
        return a==b;
    }
};