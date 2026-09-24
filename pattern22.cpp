#include<iostream>
using namespace std;
void pattern22(int n){
    int i,j;
    for(i=0;i<n;i++){
        
        for(j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
        
    }
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern22(n);
    return 0;
}

/*
* * * * * 
*       * 
*       * 
*       * 
* * * * * 

*/