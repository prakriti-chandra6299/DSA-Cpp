#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int findMaxConsecutiveOnes(vector<int>& nums){
        int count=0;
        int maxcount=0;
        //Iterate through the array to count consecutive 1's
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                //Update the maximum count if the current count is greater
                maxcount=max(maxcount,count);

            }
            else{
                count=0;

            }
        }
        return maxcount;
    }

};
int main(){
    //test case
    vector<int>nums={1,1,0,1,1,1};
    Solution sol;
    //Find the maximum number of consecutive 1's
    int maxConsecutiveOnes = sol.findMaxConsecutiveOnes(nums);
    cout<<"Max Consecutive Ones: "<<maxConsecutiveOnes<<endl;
    return 0;

}