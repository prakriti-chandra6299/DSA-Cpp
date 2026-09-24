//left rotate an array by d places
//optimal solution
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void leftRotate(vector<int> &arr, int n, int d)
{
    d = d % n;

    reverse(arr.begin(), arr.begin() + d);

    reverse(arr.begin() + d, arr.end());

    reverse(arr.begin(), arr.end());
}

int main()
{
    int n, d;

    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter d: ";
    cin >> d;

    leftRotate(arr, n, d);

    cout << "After rotation: ";

    for (int x : arr)
        cout << x << " ";

    return 0;
}
//time complexity = O(n) in (single traversal of array) 
//space complexity = O(1)(no extra space is used)
/*output
enter size: 5
enter elements: 1 2 3 4 5
enter d: 2
after rotation: 3 4 5 1 2

*/