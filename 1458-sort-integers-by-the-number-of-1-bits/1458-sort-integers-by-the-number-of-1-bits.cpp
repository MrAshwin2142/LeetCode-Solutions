class Solution {
public:
    static int bt(int a){
        int c=0;
        while(a>0){
            c+=(a%2);
            a>>=1;
        }
        return c;
    }
    static bool compBit(int a,int b){
        if(bt(a)<bt(b)) return true;
        if(bt(a)>bt(b)) return false;
        return a<b;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compBit);
        return arr;
    }
};