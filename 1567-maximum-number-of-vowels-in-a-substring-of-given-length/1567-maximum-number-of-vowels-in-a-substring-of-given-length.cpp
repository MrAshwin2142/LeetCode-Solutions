class Solution {
public:
bool isVowel(char c){
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}
    int maxVowels(string s, int k) {
        int ans=0;
        int n= s.size();
        int i=0;
        for(i=0;i<k;i++) {
            if(isVowel(s[i])) ans++;
        }
        int mx=0;
        for(;i<n;i++){
            mx=max(ans,mx);
            if(isVowel(s[i-k]) && ans>0) ans--;
            if(isVowel(s[i])) ans++;
        }
        return max(mx,ans);
    }
};