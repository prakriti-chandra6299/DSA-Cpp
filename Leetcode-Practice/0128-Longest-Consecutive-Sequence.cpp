#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int longestConsecutive(vector<int> &nums){
        unordered_set<int>st;
        //store all the elements of the input array in a set for O(1) lookup time
        for(int x:nums){
            st.insert(x);
        }
        int longest=0;
        //using the set to find the longest consecutive sequence
        for(int x:st){
            if(st.find(x-1)==st.end()){
                int current=x;
                int count =1;
                //check for the next consecutive numbers in the set
                while(st.find(current+1)!=st.end()){
                    current++;
                    count++;
                }
                longest=max(longest,count);
            }
        }
        return longest;
    }
};
int main(){
    //Test case
    vector<int>nums={100,4,200,1,3,2};
    Solution sol;
    //Find the longest consecutive sequence
    int result=sol.longestConsecutive(nums);
    //print the result
    cout<<"Longest Consecutive Sequence: "<<result<<endl;
    return 0;
}
/*
complexity:
time:O(n)
space:O(n)
output:
Longest Consecutive Sequence:4

*/