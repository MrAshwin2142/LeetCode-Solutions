class Solution {
public:
    int n;
    int memo[2][101][101];
    int solve(vector<int>&piles, int i,int per,int M){
        if(i>=n) return 0;
        if(memo[per][i][M]!=-1) return memo[per][i][M];
        int stones=0;
        int result = (per==1) ? -1:INT_MAX;
        for(int x=1;x<=min(2*M, n-i);x++){
            stones+=piles[i+x-1];
            if(per==1){
                result = max(result,stones + solve(piles,i+x,0,max(M,x)));
            }else{
                result = min(result,solve(piles,i+x,1,max(M,x)));
            }
        }
        return memo[per][i][M] = result;
    }
    int stoneGameII(vector<int>& piles) {
        n=piles.size();
        memset(memo,-1,sizeof(memo));
        return solve(piles,0,1,1);
    }
};