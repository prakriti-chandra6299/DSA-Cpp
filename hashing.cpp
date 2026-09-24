//hashing frequency counting

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //creating a hash array to store the frequency of elements
    int hash[15]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        //fetching the frequency of x
        cout<<hash[x]<<endl;
    }
    return 0;
}