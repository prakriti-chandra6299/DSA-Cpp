#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    void moveZeroes(vector<int>& nums){
        int j=0;
        //find the position of the next non-zero
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                //swap non-zero with zero
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
int main(){
    //Test case
    vector<int>nums={0,1,0,3,12};
    Solution sol;
    //Move the zeroes to the end
    sol.moveZeroes(nums);
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
/*
complexity:
time:O(n)
space:O(1)
OUTPUT:
Array:[1, 3, 12, 0, 0]
*/