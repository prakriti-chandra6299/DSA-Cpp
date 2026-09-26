//selection sort

#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-2;i++){
        int min = i;
        for(int j=i;j<n-1;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }
}
// push the min to first by finding the min in the unsorted array and swapping it with the first element of unsorted array
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }   
 
return 0;

}
//time coplexity = O(n^2) in worst case
//time complexity = O(n^2) in best case
//space complexity = O(1)