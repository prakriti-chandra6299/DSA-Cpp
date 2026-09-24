#include<iostream>
using namespace std;

void pattern7(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            cout<<i<<" " ;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern7(n);
    return 0;
}
/*
1 1 1 1 1 1 
2 2 2 2 2
3 3 3 3
4 4 4
5 5
6
*/