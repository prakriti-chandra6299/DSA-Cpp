//missing number 02
//better(hashing)

#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();

    vector<int> hash(n + 1, 0);

    for (int i = 0; i < n; i++)
        hash[nums[i]] = 1;

    for (int i = 0; i <= n; i++)
    {
        if (hash[i] == 0)
            return i;
    }

    return -1;
}

int main()
{
    int n;
    cout<<"size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout<<"enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << missingNumber(nums);
}
//time complexity = O(n)
//space complexity = O(n)