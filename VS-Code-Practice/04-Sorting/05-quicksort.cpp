// quick sort

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low;
    int j = high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<high){
            i++;

        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i],arr[j]);
    return j;
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int pivot = partition(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}
//pick pivot and partition the array into two parts, 
//one part with elements less than pivot and other 
//part with elements greater than pivot and 
//then recursively sort the two parts
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//time complexity = O(nlogn) in avg case
//time complexity = O(n^2) in worst case
//time complexity = O(nlogn) in best case
//space complexity = O(logn)