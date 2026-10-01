#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    void nextPermutation(vector<int>& nums){
        //Get the size of the input array
        int n=nums.size();
        //Find the first index from the end where the current number is less than the next number
        int index=-1;
        for(int i = n-2;i>=0;i--){
            //If the current number is less than the next number, we have found the index to swap
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        //If such an index is found, find the first number from the end that is greater than nums[index] and swap them
        if(index!=-1){
            for(int i=n-1;i>index;i--){
                //If the current number is greater than nums[index], swap them to get the next permutation
                if(nums[i]>nums[index]){
                    swap(nums[i],nums[index]);
                    break;
                }
            }
        }
        //Reverse the subarray from index+1 to the end of the array to get the next permutation
        reverse(nums.begin()+index+1,nums.end());
    }
};
int main(){
    //Test case
    vector<int>nums={1,2,3};
    Solution sol;
    //Find the next permutation
    sol.nextPermutation(nums);
    //print the result
    cout<<"Next Permutation: ";
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}
/*
complexity:
Time:  O(n)
Space: O(1)
output:
Next Permutation: 1 3 2
key idea:
algorithm: Next Permutation Algorithm
*/
