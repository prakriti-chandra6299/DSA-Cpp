#include<iostream>
#include<vector>

using namespace std;
class Solution{
    public:
    void setZeroes(vector<vector<int>>& matrix){
        int m= matrix.size();
        int n= matrix[0].size();
        int colo=1;
        //Check for zeroes in the first column and mark the first row and first column accordingly
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0){
                colo=0;
            }
        
        //Check for zeroes in the rest of the matrix and mark the first row and first column accordingly
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        //Set the elements of the matrix to zero based on the markers in the first row and first column
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0|| matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        //Set the first row and first column to zero if they were marked
        if(matrix[0][0]==0){
            for(int j=0;j<n;j++){
                matrix[0][j]=0;
            }
        }
        //Set the first column to zero if it was marked
        if(colo==0){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
    }
};
int main(){
    //Test case
    vector<vector<int>>matrix={{1,1,1},{1,0,1},{1,1,1}};
    Solution sol;
    //Set the matrix zeroes
    sol.setZeroes(matrix);
    //print the result
    cout<<"Matrix after setting zeroes: "<<endl;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
complexity:
time:O(m*n)
space:O(1)
output:
Matrix after setting zeroes:
1 0 1
0 0 0
1 0 1
key idea:
algorithm: Set Matrix Zeroes Algorithm

*/