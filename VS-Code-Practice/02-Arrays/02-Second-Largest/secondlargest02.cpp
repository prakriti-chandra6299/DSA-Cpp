// second largest element in an array
//better solution

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(vector<int> &arr, int n) {

    int largest = arr[0];

    // Find the largest element
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    int secondLargest = INT_MIN;

    // Find the second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = secondLargest(arr, n);

    if (ans == INT_MIN)
        cout << "Second Largest doesn't exist.";
    else
        cout << "Second Largest = " << ans;

    return 0;
}
//time complexity = O(2n) in worst case
//space complexity = O(1)
