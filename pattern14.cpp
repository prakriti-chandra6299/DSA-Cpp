#include<iostream>
using namespace std;

void pattern14(int n){
    int num;
    int i,j;
    num=1;
    for(i=1;i<=n;i++){
       
        for(j=1;j<=i;j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern14(n);
    return 0;
}
/*
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21

*/