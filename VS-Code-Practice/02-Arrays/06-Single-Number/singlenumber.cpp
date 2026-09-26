//single number

/*Given a non-empty array of integers, every element appears twice except for one element. Find that single element.

You must solve it in O(n) time and O(1) extra space.
*/
//brute force
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums)
{
    int n = nums.size();

    for(int i = 0; i < n; i++)
    {
        int count = 0;

        for(int j = 0; j < n; j++)
        {
            if(nums[i] == nums[j])
                count++;
        }

        if(count == 1)
            return nums[i];
    }

    return -1;
}

int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout<<"enter the number of elements: ";

    for(int i = 0; i < n; i++)
        cin >> nums[i];
    cout<<"the single element is: ";
    cout << singleNumber(nums);
}
/*output
enter the size of array: 5
enter the number of elements: 1 1 6 6 7
the single element is: 7

*/
/*
Time Complexity
O(n²)
Space Complexity
O(1)

*/