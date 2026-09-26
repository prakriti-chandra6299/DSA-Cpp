//largest element in an array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i = 0 ;i<n;i++){
        cin>>arr[i];

    }
    int largest = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];

        }
    }
    cout<<"largest element in the array is : "<< largest;
    return 0;
}
//time complexity = O(n) in worst case
//time complexity = O(n) in best case
//space complexity = O(1)
/*
Enter the size of array: 6
Enter the elements of array: 56 78 32 09 12 75
largest element in the array is : 78
*/