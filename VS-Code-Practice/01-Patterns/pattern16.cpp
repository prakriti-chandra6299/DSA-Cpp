#include<iostream>
using namespace std;

void pattern16(int n){
    int i;
    char ch;
    for(i=0;i<=n;i++){
        
        for(ch = 'A';ch <= 'A' + i ;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern16(n);
    return 0;
}
/*
A 
A B
A B C
A B C D
A B C D E
A B C D E F
A B C D E F G+


*/