//bubble sort

#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i = n-1;i>0;i--){//n=6 ;i=5,4,3,2,1
        int didSwap = 0;
        for(int j=0;j<i;j++){//j=0,1,2,3,4
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }

    }

}
// push the max to last by adjecent swapping
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//time complexity = O(n^2) in worst case
//time complexity = O(n) in best case
//space complexity = O(1)