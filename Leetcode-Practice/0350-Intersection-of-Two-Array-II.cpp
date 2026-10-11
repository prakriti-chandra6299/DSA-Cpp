#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
    public:
    vector<int> intersect(vector<int>& nums1,vector<int>& nums2){
        //Create an unordered map to store the frequency of elements in the first array
        unordered_map<int,int> mp;
        //Iterate through the first array and count the frequency of each element
        for(int x : nums1){
            mp[x]++;
        }
        //Create a vector to store the intersection elements
        vector<int> ans;
        //Iterate through the second array and check if the element exists in the map
        for(int x : nums2){
            if(mp[x] > 0){
                //If the element exists in the map, add it to the answer vector and decrement its frequency in the map
                ans.push_back(x);
                mp[x]--;
            }
            
        }
        return ans;
    }
};
int main(){
    //test case
    vector<int> nums1={1,2,2,1};
    vector<int> nums2={2,2};
    Solution sol;
    //Find the intersection of two arrays
    vector<int> result = sol.intersect(nums1, nums2);
    cout<<"Intersection of Two Arrays II: ";
    for(int x: result){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
/*
complexity:
time: O(m + n)
space: O(min(m, n))
output:
Intersection of Two Arrays II: 2 2
*/