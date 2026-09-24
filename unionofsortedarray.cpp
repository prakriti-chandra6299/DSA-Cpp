//union of two sorted array

#include<bits/stdc++.h>
using namespace std;

vector<int> unionArray(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    int i=0,j=0;
    vector<int> ans;

    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(ans.empty()||ans.back()!=arr1[i])
               ans.push_back(arr1[i]);
            i++;
        }
        else{
            if(ans.empty()||ans.back()!=arr2[j])
               ans.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        if(ans.empty()||ans.back()!=arr1[i])
           ans.push_back(arr1[i]);
           i++;
    }
    while(j<m)
    {
        if(ans.empty()||ans.back()!=arr2[j])
           ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}

int main(){
    int n,m;
    cin>>n;

    vector<int>arr1(n);
    for(int i=0;i<n;i++)
       cin>>arr1[i];
    cin>>m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++)
        cin >> arr2[i];

    vector<int> ans = unionArray(arr1, arr2);

    for (int x : ans)
        cout << x << " ";

    return 0;
}
//time complexinty = O(n+m)
//space complexity = O(n+m)(for the output array)
/*output

*/