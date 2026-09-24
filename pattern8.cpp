#include<iostream>
using namespace std;
void pattern8(int n){
    int i,j;
    for(i=0;i<n;i++){//i=0,1,2,3,4 and i<n=5
        for(j=0;j<n-i-1;j++){//j=0,1,2,3,4 and j<n-i-1= 5,4,3,2,1
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++){//j=0,1,2,3,4,5,6,7,8 and j<2*i+1= 1,3,5,7,9
            cout<<"*";
        }
        for(j=0;j<n-i-1;j++){//j=0,1,2,3,4 and j<n-i-1= 5,4,3,2,1
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern8(n);
    return 0;
}

/*
     *     
    ***
   *****
  *******
 *********
***********

*/