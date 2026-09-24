#include<iostream>
using namespace std;
void pattern20(int n){//n=5
    int i,j;
    int inis =0;
    for(i = 0;i<n;i++){//i=0,1,2,3,4 and i<n=5
        //stars
        for(j=1;j<=n-i;j++){  //j=1,2,3,4,5 and j<=n-i= 5,4,3,2,1
            cout<<"*";
        }
        for(j=0;j<inis;j++){ //j=0,1,2,3,4 and j<inis= 0,2,4,6,8
            cout<<" ";
        }
        for(j=1;j<=n-i;j++){//j=1,2,3,4,5 and j<=n-i
            cout<<"*";
        }
        inis+=2;
        cout<<endl;

    }
    inis=2*n-2;
    
    for(i = 1;i<=n;i++){//i=1,2,3,4,5 and i<=n=5
        //stars
        for(j=1;j<=i;j++){//j=1,2,3,4,5 and j<=i
            cout<<"*";
        }
        for(j=0;j<inis;j++){//j=0,1,2,3,4 and j<inis= 8,6,4,2,0
            cout<<" ";
        }
        for(j=1;j<=i;j++){//j=1,2,3,4,5 and j<=i
            cout<<"*";
        }
        inis-=2;
        cout<<endl;
        
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern20(n);
    return 0;
}


/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/