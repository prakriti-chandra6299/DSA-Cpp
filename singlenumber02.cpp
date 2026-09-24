//singlenumber
/*
Approach 2: Better (Hashing)

Store the frequency of every element in a hash map.
Time Complexity
O(n)
Space Complexity
O(n)
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int singleNumber(vector<int>& nums)
{
    unordered_map<int,int> mp;

    for(int x : nums)
        mp[x]++;

    for(int x : nums)
    {
        if(mp[x] == 1)
            return x;
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
    for(int i = 0; i < n; i++)
        cin >> nums[i];
    cout<<"the single element is: ";
    cout << singleNumber(nums);
}
/*  output
size of array: 5
enter the elements: 2 2 3 3 4
the single element is: 4

*/