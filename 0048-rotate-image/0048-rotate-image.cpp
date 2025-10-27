class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector <int> temp;
        for(int i=0;i<n;++i){
            for(int j=n-1;j>=0;j--)
          {  temp.push_back(matrix[j][i]);}
        }
        int k=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;j++){
                matrix[i][j]=temp[k];
                k++;
            }
        }

    }
};