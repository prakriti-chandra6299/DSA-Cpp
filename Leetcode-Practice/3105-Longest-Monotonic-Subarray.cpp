#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        int inc = 1, dec = 1;
        int ans = 1;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] > nums[i - 1]) {
                inc++;
                dec = 1;
            }
            else if (nums[i] < nums[i - 1]) {
                dec++;
                inc = 1;
            }
            else {
                inc = 1;
                dec = 1;
            }

            ans = max(ans, max(inc, dec));
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 4, 3, 3, 2};

    int result = obj.longestMonotonicSubarray(nums);

    cout << "Longest monotonic subarray length: " << result << endl;

    return 0;
}
/*
Complexity Analysis
- Time Complexity: O(n) — one traversal of the array.
- Space Complexity: O(1) — only a few variables are used.
Output:
Longest monotonic subarray length: 2
*/