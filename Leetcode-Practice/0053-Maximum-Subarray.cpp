#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int maxSubArray(vector<int>& nums){
        int sum =0;
        int maxi =nums[0];
        //Iterate through the array to find the maximum subarray sum
        for(int i = 0;i<nums.size();i++){
            sum +=nums[i];
            maxi = max(maxi,sum);
            if(sum<0){
                //Reset sum to 0 if it becomes negative, as a negative sum would decrease the total of any future subarray
                sum =0;

            }
        }
        return maxi;
    }
};

int main(){
    //Test case
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    Solution sol;
    //Find the maximum subarray sum
    int maxSum = sol.maxSubArray(nums);
    //print the result
    cout<<"Maximum Subarray Sum: "<<maxSum<<endl;
    return 0;
}
/*
complexity:
Time:  O(n)
Space: O(1)
output:
Maximum Subarray Sum: 6
key idea:
algorithm: Kadane's Algorithm
*/