
#include <bits/stdc++.h>
using namespace std;

int minimizeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int n = nums.size();

    // Change the two smallest elements
    int option1 = nums[n - 1] - nums[2];

    // Change the two largest elements
    int option2 = nums[n - 3] - nums[0];

    // Change the smallest and largest elements
    int option3 = nums[n - 2] - nums[1];

    return min({option1, option2, option3});
}

int main() {
    vector<int> nums = {1, 4, 7, 8, 9};

    cout << "Minimum score: " << minimizeSum(nums) << endl;

    return 0;
}
/*
Complexity analysis

Time	(O(nlog n)) — sorting
Space	(O(1)) auxiliary space, excluding sorting implementation

Output:
Minimum score: 2
*/