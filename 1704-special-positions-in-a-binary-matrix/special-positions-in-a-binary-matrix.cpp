class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<bool> row(n,true),col(m,true);
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                sum+=mat[i][j];
            }
            if(sum!=1) row[i]=false;
        }
        for(int j=0;j<m;j++){
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=mat[i][j];
                cout<<sum<<endl;
            }
            if(sum!=1) col[j]=false;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1 && row[i] && col[j]) ans++;
            }
        }
        return ans;
    }
};