//duplicate no. in an array

#include<bits/stdc++.h>
using namespace std;
int removeduplicate(vector<int>&arr,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
int main(){
    int n;
    cout<<"enter the number of ekements in the array: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k = removeduplicate(arr,n);
    cout<<"array after removing duplicates is : ";
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"numbers of unique elements in the array is : "<<k<<endl;
    return 0;    
}
//time complexity = O(n) in worst case(single traversal of array)
//space complexity = O(1)(no extra space is used)
/*output
enter the number of ekements in the array: 6
enter the elements of array: 5 5 5 0 9 2
array after removing duplicates is : 5 0 9 2 
numbers of unique elements in the array is : 4

*/