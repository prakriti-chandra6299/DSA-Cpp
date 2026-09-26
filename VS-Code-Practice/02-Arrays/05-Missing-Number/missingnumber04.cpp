//Approach 4: Optimal (XOR)

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    int xor1 = 0;
    int xor2 = 0;

    for (int i = 0; i < n; i++)
    {
        xor2 ^= nums[i];
        xor1 ^= (i + 1);
    }

    return xor1 ^ xor2;
}

int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout<<"enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout<<"the missing number is: ";
    cout << missingNumber(nums);
}

/*
time complexity=O(n)
space complexity=O(1)
*/