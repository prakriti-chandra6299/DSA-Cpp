#include<iostream>
using namespace std;

void pattern17(int n){
    int i;
    char ch;
    for(i=0;i<=n;i++){
        
        for(ch = 'A';ch <= 'A' + (n-1-i) ;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern17(n);
    return 0;
}
/*
A B C D E 
A B C D 
A B C 
A B 
A 



*/