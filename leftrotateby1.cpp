//rotate an array by 1 

#include <bits/stdc++.h>
using namespace std;
void leftrotatebyone(int arr[],int n){
    int temp = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
}
int main(){
    int n;
    cout<<"enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftrotatebyone(arr,n);
    cout<<"array after rotating by 1 is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//time complexity = O(n) in worst case(single traversal of array)
//space complexity = O(1)(no extra space is used)
/*output
enter the number of elements in the array: 5
enter the elements of array: 1 2 3 4 5
array after rotating by 1 is : 2 3 4 5 1 

*/