class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int cary=0;
        int n=d.size();
        d[n-1]++;
        for(int i=n-1;i>=0;i--){
            d[i]+=cary;
            cary=d[i]/10;
            d[i]=d[i]%10;
        }
        if(cary==1){
            d.insert(d.begin(),1);
        }
        return d;
    }
};