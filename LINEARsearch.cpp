//linear search

#include<bits/stdc++.h>
using namespace std;

int linearsearch(vector<int> &arr,int target)
{
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);//dynamic array
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target element to search: ";
    cin>>target;
    int index = linearsearch(arr,target);//
    if(index!=-1){
        cout<<"Element found at index: "<<index<<endl;
    }
    else{
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}
//time complexity=O(1)best # element in first place
//time complexity=O(n)worst
//space complexity = O(1)
/*output
Enter the size of the array: 5
Enter the elements of the array: 7 8 3 4 0
Enter the target element to search: 0
Element found at index: 4

*/