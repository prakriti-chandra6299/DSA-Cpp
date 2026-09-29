#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate = 0;
    int count = 0;
    // Boyer-Moore Voting Algorithm
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        // Increment or decrement the count based on whether the current number matches the candidate
        if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }
    // The candidate is guaranteed to be the majority element since it appears more than n/2 times
    return candidate;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    // Read the input numbers into the vector
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    // Call the majorityElement function and print the result
    cout << majorityElement(nums);

    return 0;
}