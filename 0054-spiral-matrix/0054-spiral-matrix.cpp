class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> spiral;
       int rows = matrix.size();
        int col = matrix[0].size();
        int left=0,right = col-1;
        int top =0,bottom = rows-1;
        while (top <= bottom && left <= right){
            for(int i=left;i<=right;++i){
                spiral.push_back(matrix[top][i]);
            }
            top++;
            if(top>bottom)break;
            for(int i=top;i<=bottom;++i){
                spiral.push_back(matrix[i][right]);
            }
            right--;
             if(left>right)break;
            for(int i=right;i>=left;--i){
                spiral.push_back(matrix[bottom][i]);
            }
            bottom--;
             if(top>bottom)break;
            for(int i=bottom;i>=top;--i){
                spiral.push_back(matrix[i][left]);
            }
            left++;
             if(left>right)break;
            
            
        }
        return spiral;
    }
};