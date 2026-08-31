class Solution {
public:
    bool div(int n){
        int org=n;
        while(n){
            int r=n%10;
            if(r==0) return false;
            if(org%r) return false;
            n/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            
            if(div(i)) ans.push_back(i);
        }
        return ans;
    }
};