class Solution {
public:
   bool special(vector<vector<int>> &mat, int row,int col){
    int m=mat.size();
    int n=mat[0].size();
    int r=0;
    int c=0;

    for(int i=0;i<n;i++){
        if(mat[row][i]==1){
            r++;
        }
    }
    for(int i=0;i<m;i++){
        if(mat[i][col]==1){
            c++;
        }
    }

    if(r==1 && c==1){
        return true;
    }
    return false;



   }
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        
        int c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    if(special(mat,i,j)){
                        c++;
                    }
                }
            }
        } 
        return c;       
    }
};