#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    vector<int> rearrangeArray(vector<int>& nums){
        // Get the size of the input array
        int n=nums.size();
        vector<int> ans(n);
        int posIndex = 0;
        int negIndex = 1;
        // Iterate through the input array and place positive and negative numbers in their respective positions
        for(int i =0;i<n;i++){
            if(nums[i]>0){
                // Place positive numbers at even indices
                ans[posIndex] = nums[i];
                posIndex+=2;
            }
            else{
                // Place negative numbers at odd indices
                ans[negIndex]=nums[i];
                negIndex+=2;
            }
        }
        return ans;
    }
};

int main(){
    //Test case
    vector<int>nums={3,1,-2,-5,2,-4};
    Solution sol;
    //Rearrange the array elements by sign
    vector<int> rearranged = sol.rearrangeArray(nums);
    //print the result
    cout<<"Rearranged Array: ";
    for(int i=0;i<rearranged.size();i++){
        cout<<rearranged[i]<<" ";
    }
    cout<<endl;
    return 0;
}
/*
complexity:
Time:  O(n)
Space: O(n)
output:
Rearranged Array: 3 -2 1 -5 2 -4
key idea:
algorithm: Two Pointer Approach

*/