#include<iostream>
using namespace std;

void pattern9(int n){//n=6
    int i,j;
    for(i=0;i<n;i++){//i=0,1,2,3,4,5
        for(j=0;j<i;j++){//j=0,1,2,3,4
            cout<<" ";
        }
        for(j=0;j<2*n-(2*i+1);j++){//j=0,1,2,3,4,5,6,7,8 and j<2*n-(2*i+1)= 11,9,7,5,3,1
            cout<<"*";
        }
        for(j=0;j<i;j++){//j=0,1,2,3,4 
            cout<<" ";
        }
        
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern9(n);
    return 0;
}

/*
***********
 *********
  *******
   *****
    ***
     *
*/