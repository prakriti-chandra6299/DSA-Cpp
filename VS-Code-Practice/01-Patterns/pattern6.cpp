#include<iostream>
using namespace std;

void pattern6(int n){//n=6
    int i,j;
    for(i=1;i<=n;i++){//n=1,2,3,4,5,6
        for(j=n;j>=i;j--){//n=6,5,4,3,2,1
            cout<<j<<" " ;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern6(n);
    return 0;
}
/*
6 5 4 3 2 1 
6 5 4 3 2
6 5 4 3
6 5 4
6 5
6
*/