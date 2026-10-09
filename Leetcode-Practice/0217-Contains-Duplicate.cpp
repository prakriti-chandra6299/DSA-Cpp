#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution{
    public:
    bool containsDuplicate(vector<int>& nums){
        unordered_set<int>st;
        for(int x: nums){
            if(st.find(x)!=st.end()){
                return true;
            }
            st.insert(x);
        }
        return false;
    }
};
int main(){
    vector<int>nums={1,2,3,4,5};
    Solution sol;
    bool result=sol.containsDuplicate(nums);
    if(result){
        cout<<"The array contains duplicates."<<endl;
    }
    else{
        cout<<"The array does not contain duplicates."<<endl;
    }
    return 0;
}
/*
complexity:
Time: O(n) - where n is the number of elements in the input array nums.
Space: O(n) - we use an unordered_set to store the unique elements from the input array, which can take up to n space in the worst case.

output:
The array does not contain duplicates.
*/
    