//sort an array of 0s, 1s and 2s in a single pass
/*
Given an array containing only 0, 1, and 2, sort
 it in-place without using any built-in sorting algorithm.
*/
//better (counting method)
#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &arr)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for (int x : arr)
    {
        if (x == 0)
            cnt0++;
        else if (x == 1)
            cnt1++;
        else
            cnt2++;
    }

    int i = 0;

    while (cnt0--)
        arr[i++] = 0;

    while (cnt1--)
        arr[i++] = 1;

    while (cnt2--)
        arr[i++] = 2;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sortColors(arr);

    for (int x : arr)
        cout << x << " ";
}
//time complexity: O(n)
//space complexity: O(1)
/*

*/