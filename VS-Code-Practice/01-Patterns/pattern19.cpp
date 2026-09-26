#include<iostream>
using namespace std;
void pattern19(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
        
    }
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern19(n);
    return 0;
}

/*
E 
D E 
C D E 
B C D E 
A B C D E 

*/