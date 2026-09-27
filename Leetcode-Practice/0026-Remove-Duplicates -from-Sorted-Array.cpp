#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int removeDuplicates(vector<int>& nums){

        //if the array is empty,there are no elements.
        if(nums.empty()){
            return 0;
        }
            //i points to the position where the next unique element should be plced.
            int i=0;
            //start checking from the second element.
            for(int j=1;j<nums.size();j++){
                 // a different number means we found a new unique element.
                if(nums[j]!=nums[i]){
                    //move the pointer i forward and place the new unique element there.
                    i++;
                    nums[i]=nums[j];
            }
        }
        //number of unique elements = i+1.
        return i+1;

    }
};
int main() {

    // Test case for VS Code.
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};

    Solution sol;

    // Call the same function that LeetCode uses.
    int k = sol.removeDuplicates(nums);

    // Print the number of unique elements.
    cout << "Number of unique elements: " << k << endl;

    // Print the modified array.
    cout << "Array: [";

    for (int i = 0; i < k; i++) {
        cout << nums[i];

        if (i < k - 1){
            cout << ", ";
        }
    }

    cout << "]" << endl;

    return 0;
}
/*
output:
Number of unique elements: 4
Array: [1, 2, 3, 4]
*/
    