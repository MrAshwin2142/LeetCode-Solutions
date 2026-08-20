class Solution {
public:
    int solve(int n,int k){
        if(k<=2) return k==1?0:1;
        
        int mid = pow(2,n-2);
        if(k<=mid) return solve(n-1,k);
        else return !(solve(n-1,k-mid));
    }
    int kthGrammar(int n, int k) {
        return solve(n,k);
    }
};