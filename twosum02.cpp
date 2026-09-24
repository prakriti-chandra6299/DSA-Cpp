//two sum problem (better solution)
/*Idea
For every element:
target = nums[i] + x
x = target - nums[i]
Check if x already exists in the hash map.
If yes:
Return the indices.
Otherwise:
Store the current number.
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

    int n, target;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];

    cin >> target;

    unordered_map<int,int> mp;

    for(int i = 0; i < n; i++)
    {
        int need = target - nums[i];

        if(mp.find(need) != mp.end())
        {
            cout << mp[need] << " " << i;
            return 0;
        }

        mp[nums[i]] = i;
    }

    cout << "No pair found";
}
//time complexity: O(n)
//space complexity: O(n)
