#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
    void rotate(vector<vector<int>>& matrix){
        int n=matrix.size();
        //Transpose the matrix
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //Reverse each row of the transposed matrix
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
int main(){
    //Test case
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    Solution sol;
    //Rotate the matrix
    sol.rotate(matrix);
    //print the result
    cout<<"Matrix after rotation: "<<endl;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*complexity:
Time: O(n^2) - The algorithm iterates through the entire matrix twice: once for transposing and once for reversing each row. Each of these operations takes O(n^2) time, where n is the number of rows (or columns) in the matrix.
Space: O(1) - The algorithm uses a constant amount of extra space for variables and
output:
Matrix after rotation: 
7 4 1 
8 5 2 
9 6 3 
*/