#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        // Merge nums1 and nums2 from the end to avoid overwriting elements in nums1
        while(i >= 0 && j >= 0) {
            if(nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }
            else {
                // Place the larger element at the end of nums1
                nums1[k] = nums2[j];
                j--;
            }

            k--;
        }
        // If there are remaining elements in nums2, copy them to nums1
        while(j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
    
};
int main() {
    // Test case
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    Solution sol;

    // Merge nums2 into nums1
    sol.merge(nums1, m, nums2, n);

    // Print the result
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
/*
complexity:
Time: O(m + n) - where m is the number of elements in nums1 and n is the number of elements in nums2
Space: O(1) - since we are merging in place without using extra space
output:
Merged array: 1 2 2 3 5 6
*/