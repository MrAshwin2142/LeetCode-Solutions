class Solution {
public:
    bool check(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    bool pal(int n){
        string g= to_string(n);
        string o=g;
        reverse(o.begin(),o.end());
        return o==g;
    }
    int primePalindrome(int n) {
        // if(n>9896989) return n;
        if(n==1) return  2;
        vector<string> allp={"0","1","2","3","4","5","6","7","8","9"};
        int s=allp.size();
        for(int i=0;i<s && s<25000;i++){
            string t=allp[i];
            for(int j=0;j<=9;j++){
                char c='0'+j;
                allp.push_back(c+t+c);

            }
            s=allp.size();
        }
        vector<long long> nu;
        nu.push_back(11);
        for(string i:allp) nu.push_back(stoi(i));
        sort(nu.begin(),nu.end());
        for(int i=0;i<nu.size();i++){
            if(nu[i]>100030001) return 100030001;
            if(nu[i]>=n && pal(nu[i]) && check(nu[i])) return nu[i];
        }
        
        return n;
    }
};