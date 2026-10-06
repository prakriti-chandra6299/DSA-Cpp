#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        // Sort the intervals based on the starting time
        sort(intervals.begin(), intervals.end());
        // Merge overlapping intervals
        for(int i = 0; i < intervals.size(); i++) {
            // If the current interval does not overlap with the last interval in ans, add it to ans
            if(ans.empty() || intervals[i][0] > ans.back()[1]) {
                ans.push_back(intervals[i]);
            }
            else {
                // If it does overlap, merge the current interval with the last interval in ans
                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
        }
        // Return the merged intervals
        return ans;
    }
};
int main(){
    // Test case
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};

    Solution sol;

    // Merge overlapping intervals
    vector<vector<int>> result = sol.merge(intervals);

    // Print the result
    cout << "Merged intervals: " << endl;
    for (const auto& interval : result) {
        cout << "[" << interval[0] << ", " << interval[1] << "]" << endl;
    }

    return 0;
}
/*
complexity:
Time: O(n log n) - due to sorting the intervals
Space: O(n) - for storing the merged intervals in the ans vector
output:
Merged intervals: 
[1, 6]
[8, 10]
[15, 18]


*/