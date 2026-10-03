#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> spiraloreder(vector<vector<int>>& matrix){
        vector<int> result;
        if(matrix.empty()) return result;
        int top=0, bottom=matrix.size()-1, left=0, right=matrix[0].size()-1;
        while(top<=bottom && left<=right){
            // Traverse from left to right
            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            top++;
            // Traverse from top to bottom
            for(int i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                // Traverse from right to left
                for(int i=right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                // Traverse from bottom to top
                for(int i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }
};
int main(){
    //Test case
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    Solution sol;
    //Get the spiral order of the matrix
    vector<int> result=sol.spiraloreder(matrix);
    //print the result
    cout<<"Spiral order of the matrix: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}
/*
complexity:
Time: O(m*n) - The algorithm visits each element of the matrix exactly once, where m is the number of rows and n is the number of columns in the matrix.
Space: O(1) - The algorithm uses a constant amount of extra space for variables and the result vector.
output:
Spiral order of the matrix: 1 2 3 6 9 8 7 4 5
*/