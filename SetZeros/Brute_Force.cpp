#include <iostream>
#include <vector>
using namespace std;
void setZeros(vector<vector<int>>&matrix){
    int m=matrix.size(); //Number of rows
    int n=matrix[0].size();   // Number of columns
    for(int i=0;i<m;i++){  //Traverse the matrix
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){ //If current index element is zero
                for(int col=0;col<n;col++){
                    matrix[i][col]=-1; //Mark all elements in this column as -1
                }
                for(int row=0;row<m;row++){
                    matrix[row][j]=-1;  //Mark all elements in this row as -1
                }
            }
        }
    }
  //Replace -1 with 0
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==-1){
                matrix[i][j]=0;
            }
        }
    }
}
int main(){
    vector<vector<int>>matrix={{1,1,1},{1,0,1},{1,1,1}};
    setZeros(matrix);
    for(auto row:matrix){
        for(auto val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}
