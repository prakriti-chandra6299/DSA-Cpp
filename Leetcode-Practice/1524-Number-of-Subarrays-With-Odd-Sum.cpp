#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {

        const int MOD = 1e9 + 7;

        long long odd = 0;
        long long even = 1;
        long long sum = 0;
        long long ans = 0;

        for (int num : arr) {
            sum += num;

            if (sum % 2 == 0) {
                ans += odd;
                even++;
            }
            else {
                ans += even;
                odd++;
            }

            ans %= MOD;
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {1, 3, 5};

    int result = obj.numOfSubarrays(arr);

    cout << "Number of subarrays with odd sum: " << result << endl;

    return 0;
}
/*
Complexity Analysis
- Time Complexity: (O(n)) — one traversal.
- Space Complexity: (O(1)) — only a few variables.
Output:
Number of subarrays with odd sum: 4
*/