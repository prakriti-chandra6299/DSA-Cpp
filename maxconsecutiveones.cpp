//max consecutive ones

#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            count++;
            maxCount = max(maxCount, count);
        }
        else
        {
            count = 0;
        }
    }

    return maxCount;
}

int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout<<"enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout<<"the max consecutive ones(1's): ";
    cout << findMaxConsecutiveOnes(nums);

    return 0;
}
//time complexity:O(n)
//space complexity:O(1)
/*output
enter the size of array: 8
enter the elements of the array: 0 0 1 1 1 0 0 1
the max consecutive ones: 3

*/