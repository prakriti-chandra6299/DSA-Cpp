#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
int main(){
     vector<int> nums = {1, 2, 5, 2, 3};
    int target = 2;

    Solution sol;
    vector<int> result = sol.targetIndices(nums, target);

    cout << "Target indices: [";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
/*
Complexity:
- Time: (O(nlog n)), due to sorting.
- Space: (O(n)) for the result in the worst case.
output:
Target indices: [1, 2]
*/