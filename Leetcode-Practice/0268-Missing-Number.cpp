#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int missingNumber(vector<int>& nums){
        int n = nums.size();
        int xor1=0;
        int xor2=0;
        //XOR all the numbers from 0 to n
        for(int i=0;i<n;i++){
            xor2^=nums[i];
            xor1^=(i+1);
        }
        //The missing number is the XOR of the two results
        return xor1^xor2;

    }
};
int main(){
    //Test case
    vector<int>nums={3,0,1};
    Solution sol;
    //Find the missing number
    int missing = sol.missingNumber(nums);
    //print the result
    cout<<"Missing Number: "<<missing<<endl;
    return 0;
}