class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int s=0,e=m*n -1;
        while(s<=e){
            int mid = (e+s)/2;
            int i = mid/m;
            int j = mid%m;
            if(matrix[i][j]==target) return true;
            if(matrix[i][j]<target) s=mid+1;
            else e=mid-1;
        }
        return false;
    }
};