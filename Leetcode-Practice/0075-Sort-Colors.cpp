#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    void sortColors(vector<int>& nums){
        int low =0;
        int mid =0;
        int high = nums.size()-1;
        //Use the Dutch National Flag algorithm to sort the colors
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            //If the current element is 1, just move to the next element
            else if(nums[mid]==1){
                mid++;
            }
            else{
                //If the current element is 2, swap it with the element at high and decrease high
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
int main(){
    //Test case
    vector<int>nums={2,0,2,1,1,0};
    Solution sol;
    //Sort the colors
    sol.sortColors(nums);
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
output:
Array:[0, 0, 1, 1, 2, 2]
complexity:
Time:  O(n)
Space: O(1)


*/