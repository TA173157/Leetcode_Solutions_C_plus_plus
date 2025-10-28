class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        int start =0,end = m*n-1;
        if(mat[0][0]==target || mat[m-1][n-1]==target)return true;
        while(start<=end){
            int mid = (start+end)/2;
            int col = mid%n;
            int row = mid/n;
            if(mat[row][col]==target)return true;
            else if(mat[row][col]>target) end = mid-1;
            else start = mid+1;
        } 
        return false;
    }
};