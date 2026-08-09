class Solution {
public:
    void bfs(vector<vector<char>>& grid,vector<vector<bool>> &visit,int i,int j){
        if(grid[i][j]=='0') return;
        if(visit[i][j]) return;
        visit[i][j]=true;
        int n=grid.size(),m=grid[0].size();
        if(i>0) bfs(grid,visit,i-1,j);
        if(j>0) bfs(grid,visit,i,j-1);
        if(i<n-1) bfs(grid,visit,i+1,j);
        if(j<m-1) bfs(grid,visit,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> visit(n,vector<bool>(m,false));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && !visit[i][j]){
                    ans++;
                    bfs(grid,visit,i,j);
                }
            }
        }
        return ans;
    }
};