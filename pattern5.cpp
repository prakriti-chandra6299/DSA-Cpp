#include<iostream>
using namespace std;

void pattern5(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern5(n);
    return 0;
}
/*
 * * * * * * 
* * * * *
* * * *
* * *
* *
*

*/