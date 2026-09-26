#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target){
         //store each number along with its index.
         //this helps us find the required number quickly.
         unordered_map<int,int>mp;
         for(int i=0;i<nums.size();i++){
            //find the number needed to reach the target.
            int required = target - nums[i];

            //check if the required number was already seen.
            if(mp.find(required)!=mp.end()){
                //return the indices of the two numbers.
                return{mp[required],i};
            }
            //store the current number and its index.
            mp[nums[i]] = i;
        }
            //no valid pair found.
            return{};
         
    }
};
int main(){
    //test case for vs code.
    vector<int> nums = {2,7,11,15};
    int target = 9;
    solution sol;
    //run the same function used by Leetcode.
    vector<int> ans = sol.twoSum(nums,target);
    //print the result.
    cout<<"[";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        if(i<ans.size()-1){
            cout<<", ";
        }
    }
    cout<<"]"<<endl;
    return 0;
}
