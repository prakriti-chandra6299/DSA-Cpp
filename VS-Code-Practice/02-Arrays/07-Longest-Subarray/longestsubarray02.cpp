//longest subarray in the array sum equals to k
/*
Q)) Given an array and an integer K,
 find the length of the longest subarray
  whose sum is exactly K.
  */
 //optimal solution

 #include<iostream>
 #include<vector>
 using namespace std;

 int longestsubarray(vector<int> &arr,int k){
    int left = 0;
    int right =0;
    int sum = arr[0];
    int maxlen=0;
    int n = arr.size();
    while(right<n){
        while(left<=right && sum>k){
            sum-= arr[left];
            left++;
        }
        if(sum==k)
        {
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n)
          {
            sum+=arr[right];
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
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter K: ";
    cin>>k;
    cout<<"longest length = "<<longestsubarray(arr,k);
 }
 //time complexity =O(n)
 //space complexity =O(1)
 /*  
 
 */