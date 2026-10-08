#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    vector<int>sortedSquares(vector<int>& nums){
        int n= nums.size();
        vector<int>ans(n);
        int left = 0;
        int right = n-1;
        for(int i=n-1;i>=0;i--){
            if(abs(nums[left])>abs(nums[right])){
               ans[i]=nums[left]*nums[left];
               left++;
        }
            else{
               ans[i]=nums[right]*nums[right];
               right--;
        }
      }
      return ans;
    }
};
int main(){
    vector<int>nums={-4,-1,0,3,10};
    Solution sol;
    vector<int>result=sol.sortedSquares(nums);
    cout<<"Sorted squares: ";
    for(int num:result){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
/*
complexity:
Time: O(n) - where n is the number of elements in the input array nums. We traverse the array once to compute the squares and fill the result array.
Space: O(n) - we use an additional array ans of size n to store the sorted squares.
output:
sorted squares: 0 1 9 16 100

*/
