//move all zero to end

#include<bits/stdc++.h>
using namespace std;

void movezeroes(vector<int> &arr,int n){
    int j = -1;
    //find the first zero
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    //if there are no zeroes in the array
    if (j==-1){
        return;
    }
    //move non-zero elements to the left
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    movezeroes(arr,n);
    cout<<"Array after moving zeroes to the end: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//time complexity = O(n) 
//space complexity = O(1)
/*output
 Enter the size of the array: 5
Enter the elements of the array: 0 0 3 0 5
Array after moving zeroes to the end: 3 5 0 0 0 

*/