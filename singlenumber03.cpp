//single number
//optimal (XOR)
/*
a ^ a = 0
a ^ 0 = a
*/
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums)
{
    int ans = 0;

    for(int i = 0; i < nums.size(); i++)
    {
        ans ^= nums[i];
    }

    return ans;
}

int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout<<"enter the elements of the array: ";
    for(int i = 0; i < n; i++)
        cin >> nums[i];
    cout<<"the single element of the array ";
    cout << singleNumber(nums);

    return 0;
}
/*time complexity = O(n)
space complexity = O(1)

output
enter the size of array: 5
enter the elements of the array: 2 4 4 2 7
the single element of the array 7

*/