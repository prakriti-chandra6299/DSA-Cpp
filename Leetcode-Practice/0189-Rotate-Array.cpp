#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
    void rotate(vector<int>& nums,int k)
{
        int n =  nums.size();
        //Avoid unnecessary rotations
        k = k % n;
        //Reverse the entire array
        reverse(nums.begin(),nums.end());
        //Reverse the first k elements
        reverse(nums.begin(),nums.begin()+k);
        //Reverse the remaining elements
        reverse(nums.begin()+k,nums.end());
}
};
int main(){
    //Test case
    vector<int>nums={1,2,3,4,5,6,7};
    int k = 3;
    Solution sol;
    //Rotate the array
    sol.rotate(nums,k);
    //print the result
    cout<<"Array:[";
    for(int i = 0 ;i<nums.size();i++){
        cout<<nums[i];
        if(i<nums.size()-1){
            cout<<", ";
    }
    }
    cout<<"]"<<endl;
    return 0;
}
/*output:
Array:[5, 6, 7, 1, 2, 3, 4]
complexity:
Time:  O(n)
Space: O(1)
*/
