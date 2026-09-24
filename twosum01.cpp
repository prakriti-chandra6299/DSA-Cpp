//two sum problem
//brute force approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,target;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];

   } 
   cout<<"Enter the target sum: ";
   cin>>target;
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]+arr[j]==target)
        {
            cout<<"The pair is: "<<arr[i]<<" and "<<arr[j]<<endl;
            return 0;
        }
    }
   }
   cout<<"No pair found that adds up to the target sum."<<endl;
}
//time complexity: O(n^2)
//space complexity: O(1)
/*output
Enter the size of array: 6
Enter the elements of array: 2 3 1 7 5 4
Enter the target sum: 6
The pair is: 2 and 4


*/