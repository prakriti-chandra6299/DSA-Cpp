#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int searchInsert(vector<int>& nums,int target){
        int low =0;
        int high=nums.size()-1;

        while(low<=high){
            //Calculate the middle index to avoid potential overflow
            int mid = low+(high-low)/2;
            if(nums[mid]==target){
                return mid;
            }
            //If the target is greater than the middle element, search in the right half
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high = mid-1;
            }
        }
        //If the target is not found, return the index where it can be inserted to maintain sorted order
        return low;
    }
};
int main(){
    //Test case
    vector<int>nums={1,3,5,6};
    int target=5;
    Solution sol;
    //Get the index of the target or the position to insert it
    int result=sol.searchInsert(nums,target);
    //print the result
    cout<<"Index of the target or position to insert: "<<result<<endl;
}
/*
complexity:
Time: O(log n) - The algorithm uses binary search, which divides the search space in half with each iteration, leading to logarithmic time complexity.
Space: O(1) - The algorithm uses a constant amount of extra space for variables and
output:
Index of the target or position to insert: 2
*/