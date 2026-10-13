#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            if(mp.find(nums[i]) != mp.end()) {
                if(i - mp[nums[i]] <= k)
                    return true;
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};
int main() {
    //test case
    vector<int> nums = {1, 2, 3, 1};
    int k = 3;
    Solution sol;
    //Check if the array contains nearby duplicates
    bool result = sol.containsNearbyDuplicate(nums, k);
    cout << "Contains Nearby Duplicate: " << (result ? "true" : "false") << endl;
    return 0;
}
/*
complexity:
time:O(n)
space:O(n)
output:
Contains Nearby Duplicate: true

*/