//left rotate an array by d places
//brute force solution

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, d;
    cout<<"enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout<<"enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout<<"enter the number of places to rotate the array: ";
    cin >> d;
    d = d % n;

    vector<int> first, second;

    for (int i = 0; i < d; i++)
        first.push_back(arr[i]);

    for (int i = d; i < n; i++)
        second.push_back(arr[i]);

    vector<int> ans;

    for (int x : second)
        ans.push_back(x);

    for (int x : first)
        ans.push_back(x);
    cout << "array after rotating by " << d << " is : ";
    for (int x : ans)
        cout << x << " ";
}
//time complexity = O(n) in worst case(single traversal of array)
//space complexity = O(n)(extra space is used)
/*output
enter the number of elements in the array: 5
enter the elements of array: 1 2 3 4 5 
enter the number of places to rotate the array: 3
array after rotating by 3 is : 4 5 1 2 3 


*/