//sort an array of 0s, 1s and 2s in a single pass
/*optimal solution(DUTCH NATIONAL FLAG ALGORITHM)
Idea
Maintain three pointers:
low → next position for 0
mid → current element
high → next position for 2
Rules
If arr[mid] == 0
Swap arr[low] and arr[mid]
low++
mid++
If arr[mid] == 1
mid++
If arr[mid] == 2
Swap arr[mid] and arr[high]
high--
Don't increment mid
*/
#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int> &arr)
{
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
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

    return 0;
}
//Time Complexity: O(n)
//Space Complexity: O(1)