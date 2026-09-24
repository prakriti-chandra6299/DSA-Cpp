//Longest Subarray with Sum K (Positive + Negative Numbers)
/*
Problem Statement
Given an array containing positive, negative, 
and zero values, find the length of the longest
 subarray whose sum is equal to K.
*/
/*Why Sliding Window Doesn't Work
Example:

1 -1 5 -2 3
K = 3
When negative numbers exist:
Adding an element may decrease the sum.
Removing an element may increase the sum.
So the sliding window technique is not valid.*/
/*Optimal Approach (Prefix Sum + Hash Map)*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarray(vector<int> &arr, int k)
{
    unordered_map<long long, int> preSumMap;

    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];

        if (sum == k)
        {
            maxLen = i + 1;
        }

        long long rem = sum - k;

        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
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

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter K: ";
    cin >> k;

    cout << "Longest Length = " << longestSubarray(arr, k);

    return 0;
}
//time complexity = O(n)
//space complexity = O(n)
/*Remember these two rules:

Only positive numbers → Sliding Window (O(n))
Positive + Negative numbers → Prefix Sum + Hash Map (O(n))

This is one of the most frequently asked interview patterns in arrays.*/