//unordered map 
//number hashing

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    //precompute the hash array
    //iterate in  the map
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        int x;
        cout<<"Enter the number to search: ";
        cin>>x;
        cout<<mpp[x]<<endl;
    }
    return 0;
}