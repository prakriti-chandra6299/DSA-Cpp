//missing number 03
//optimal(sum formula)
/*
Idea

The sum of numbers from 0 to n is:

Total Sum=2n(n+1)
Subtract the sum of the array.

The remaining value is the missing number.

*/

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    int totalSum = n * (n + 1) / 2;

    int arraySum = 0;

    for (int i = 0; i < n; i++)
        arraySum += nums[i];

    return totalSum - arraySum;
}

int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout<<"enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << missingNumber(nums);
}
/*
Time Complexity=O(n)
Space Complexity=O(1)

*/