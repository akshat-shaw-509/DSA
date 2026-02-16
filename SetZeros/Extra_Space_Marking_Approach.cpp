class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
      //Store position of zero using pair
        vector<pair<int,int>>zeros;
      //Collect all zero positions
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0) zeros.push_back({i,j}); //pair(row,col)
            }
        }
      //Set row & col to zero
        for(auto &p:zeros){
            int row=p.first;
            int col=p.second;
          //Make entire row zero
            for(int i=0;i<m;i++){
                matrix[i][col]=0;
            }
          //Make entire col zero
            for(int j=0;j<n;j++){
                matrix[row][j]=0;
            }
        }
    }
};
