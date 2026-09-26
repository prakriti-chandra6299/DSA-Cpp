//second largest element in an array
//optimal solution
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int>arr(n);

    cout<<" Enter  the elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int largest = arr[0];
    int secondlargest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest){
            secondlargest = arr[i];
        }
    }
    if(secondlargest==largest){
        cout<<"There is no second largest element in the array";
    }
    else{
        cout<<"second largest element in the array is : "<< secondlargest;
    }
    return 0;
}
//time complexity = O(n) in worst case
//time complexity = O(n) in best case
//space complexity = O(1)
/*
**output**
Enter the size of array: 6
 Enter  the elements : 34 98 55 10 98 38
second largest element in the array is : 55
*/