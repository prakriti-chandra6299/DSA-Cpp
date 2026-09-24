#include<iostream>
using namespace std;
void pattern12(int n){
    int i,j;
    int start = 1;
    for(i=1;i<=n;i++){//n=6
        if(i%2==0)
        {
            start = 0;//i=2,4,6 and i%2==0
        }
        else{
            start=1;//i=1,3,5 and i%2!=0
        }
        for(j=1;j<=i;j++){
            cout<<start<<" ";
            start = 1 - start;//i=1,2,3,4,5,6 and start= 1,0,1,0,1,0
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern12(n);
    return 0;
}
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1

*/