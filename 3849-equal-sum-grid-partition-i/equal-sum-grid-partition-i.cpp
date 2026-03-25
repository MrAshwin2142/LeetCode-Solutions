class Solution {
public:
    static bool canPartitionGrid(vector<vector<int>>& grid) {
        long long Tsum=0;
        for(auto& row : grid)
            Tsum+=accumulate(row.begin(), row.end(), 0LL);
        if (Tsum&1) return 0;
        const long long target=Tsum/2;
        const int r=grid.size(), c=grid[0].size();
        long long rowSum=0, colSum=0;
        for(int i=0; rowSum<target && i<r; i++){
            rowSum+=accumulate(grid[i].begin(), grid[i].end(), 0LL);
        }
        if (rowSum==target) return 1;
        for(int j=0; colSum<target && j<c; j++){
            for(int i=0; i<r; i++) colSum+=grid[i][j];
        }
        return colSum==target;
    }
};