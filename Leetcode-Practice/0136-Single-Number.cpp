#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int singleNumber(vector<int>& nums){
        int result=0;
        //XOR all the numbers in the array
        for(int i=0;i<nums.size();i++){
            result^=nums[i];
        }
        //The result will be the single number
        return result;
    }
};
int main(){
    //Test case
    vector<int>nums={4,1,2,1,2};
    Solution sol;
    //Find the single number
    int single = sol.singleNumber(nums);
    //print the result
    cout<<"Single Number: "<<single<<endl;
    return 0;
}
/*complexity:
Time:  O(n)
Space: O(1)

output:
Single Number: 4

key idea:
x ^ x = 0
x ^ 0 = x
*/