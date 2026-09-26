//insertion sort

#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i =0;i<n;i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
//take an element and place it in the correct position in the sorted part of the array
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    return 0;
}
//time complexity = O(n^2) in worst case
//time complexity = O(n) in best case
//space complexity = O(1)