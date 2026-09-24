#include<iostream>
using namespace std;

void pattern15(int n){
    int i;
    char ch;
    for(i=1;i<=n;i++){
        ch = 'A' + i - 1;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern15(n);
    return 0;
}
/*
A 
B B 
C C C 
D D D D 
E E E E E 
*/