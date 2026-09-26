//longest subarray to find a sum 
/*
Q)) Given an array and an integer K,
 find the length of the longest subarray
  whose sum is exactly K.(positive number)
  */
//brute force

#include<iostream>
#include<vector>
using namespace std;
int longestsubarray(vector<int> &arr,int k)
{
    int n=arr.size();
    int maxlen =0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                maxlen = max(maxlen,j-i+1);
            }
        }
    }
    return maxlen;
}
int main(){
    int n,k;
    cout<<"Enter size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter k: ";
    cin>>k;
    cout<<"Longestlength = "<<longestsubarray(arr,k);
}
//time complexity = O(n^2)
//space complexity = O(1)
/* output
Enter size: 7
Enter elements: 2 4 0 1 1 2 3
Enter k: 5
Longestlength = 3

*/