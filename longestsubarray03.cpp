//longest subarray to find a sum 
/*
Q)) Given an array and an integer K,
 find the length of the longest subarray
  whose sum is exactly K.(positive no.)
  */
//optimal solution = = Sliding window 

#include <iostream>
#include <vector>
using namespace std;

int longestSubarray(vector<int> &arr, int k)
{
    int left = 0;
    int right = 0;

    int sum = arr[0];
    int maxLen = 0;

    int n = arr.size();

    while(right < n)
    {
        while(left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }

        if(sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;

        if(right < n)
            sum += arr[right];
    }

    return maxLen;
}

int main()
{
    int n, k;

    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter K: ";
    cin >> k;

    cout << "Longest Length = " << longestSubarray(arr, k);
}
//time complexity = O(n^2)
//space complexity = O(1)
/* output
Enter size: 7
Enter elements: 2 4 0 1 1 2 3
Enter k: 5
Longestlength = 3

*/