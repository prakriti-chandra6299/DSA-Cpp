//missing number
//brute force

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i <= n; i++)
    {
        bool found = false;

        for (int j = 0; j < n; j++)
        {
            if (nums[j] == i)
            {
                found = true;
                break;
            }
        }

        if (!found)
            return i;
    }

    return -1;
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
    cout<<"the missing number is: ";
    cout << missingNumber(nums);
}
//time complexity = O(n**2)
//space complexity = O(1)
/*output
enter the size of array: 5
enter the elements: 0 1 7 2 4 
the missing number is: 3
*/
//output  only gives the first missing number in the array