//mergesort without vector

#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int temp[100];

    int left = low;
    int right = mid + 1;
    int k = low;

    while(left <= mid && right <= high){
        if(arr[left]<= arr[right]){
            temp[k]= arr[left];
            left++;

        }
        else{
            temp[k]= arr[right];
            right++;

        }
        k++;
    }
    while(left<=mid){
        temp[k]= arr[left];
        left++;
        k++;

    }
    while(right<=high){
        temp[k]= arr[right];
        right++;
        k++;
    }
    for(int i = low; i<=high; i++){
        arr[i]= temp[i];
    }

}
void mergesort(int arr[],int low,int high){
    if(low>=high){
        return;
    }
    int mid = (low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
    }
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    mergesort(arr,0,n-1);
    cout<<"sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//time complexity = O(nlogn) in worst case
//time complexity = O(nlogn) in best case
//space complexity = O(n)









