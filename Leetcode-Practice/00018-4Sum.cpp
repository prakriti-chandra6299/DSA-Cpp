#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long target) {

        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 3; i++) {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            for (int j = i + 1; j < n - 2; j++) {

                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int left = j + 1;
                int right = n - 1;

                while (left < right) {

                    long long sum = (long long)nums[i]
                                  + nums[j]
                                  + nums[left]
                                  + nums[right];

                    if (sum == target) {

                        ans.push_back({
                            nums[i],
                            nums[j],
                            nums[left],
                            nums[right]
                        });

                        left++;
                        right--;

                        while (left < right &&
                               nums[left] == nums[left - 1])
                            left++;

                        while (left < right &&
                               nums[right] == nums[right + 1])
                            right--;
                    }
                    else if (sum < target) {
                        left++;
                    }
                    else {
                        right--;
                    }
                }
            }
        }

        return ans;
    }
};
int main(){
    // Test case
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    long long target = 0;

    Solution sol;

    // Find all unique quadruplets that sum to the target
    vector<vector<int>> result = sol.fourSum(nums, target);

    // Print the result
    cout << "Unique quadruplets that sum to " << target << ": " << endl;
    for (const auto& quadruplet : result) {
        cout << "[";
        for (size_t i = 0; i < quadruplet.size(); ++i) {
            cout << quadruplet[i];
            if (i < quadruplet.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
/*
complexity:
time:O(n^3)
space:O(1)
output:
Unique quadruplets that sum to 0: 
[-2, -1, 1, 2]
[-2, 0, 0, 2]
[-1, 0, 0, 1]
*/