#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
class Solution{
    public:
          vector<int>intersection(vector<int>& nums1,vector<int>& nums2){
            //Create an unordered set to store unique elements from the first array
            unordered_set<int> st;
            for(int x: nums1){
                st.insert(x);
            }
            //Create a vector to store the intersection elements
            vector<int> ans;
            //Iterate through the second array and check if the element exists in the set
            for(int x: nums2){
                //If the element exists in the set, add it to the answer vector and remove it from the set to avoid duplicates
                if(st.find(x)!=st.end()){
                    ans.push_back(x);
                    st.erase(x);
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
    vector<int> result = sol.intersection(nums1, nums2);
    cout<<"Intersection of Two Arrays: ";
    for(int x: result){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;

}