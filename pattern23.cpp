#include<iostream>
using namespace std;
void pattern23(int n){
    int i,j;
     for(i=0;i<2*n-1;i++){//0,1,2,3,4,5,6,7,8
        for(j=0;j<2*n-1;j++)//0,1,2,3,4,5,6,7,8

        {
            int top = i;//0,1,2,3,4,5,6,7,8
            int left = j;//0,1,2,3,4,5,6,7,8
            int right = (2*n-2) - j;//8,7,6,5,4,3,2,1,0
            int bottom = (2*n-2) - i;//8,7,6,5,4,3,2,1,0
            cout<<n - min(min(top,bottom),min(left,right))<<" ";//5,4,3,2,1,2,3,4,5
        }
     
       cout<<endl; 
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern23(n);
    return 0;
}

/*
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5 

*/