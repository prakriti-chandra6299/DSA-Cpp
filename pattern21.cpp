#include<iostream>
using namespace std;
void pattern21(int n){
    int spaces=2*n-2;  //n=5=>8
    int i,j;
    for(i=1;i<=2*n-1;i++){//1,2,3,4,5,6,7,8,9
        int stars = i;//1,2,3,4,5,6,7,8,9
        if(i>n)//6,7,8,9
        {
            stars = 2*n-i;//4,3,2,1
        }
        for(j=1;j<=stars;j++){
            cout<<"*";//1,2,3,4,5,6,7,8,9
        }
        for(j=1;j<=spaces;j++){
            cout<<" ";//8,6,4,2,0,2,4,6,8
        }
        for(j =1;j<=stars;j++){
            cout<<"*";//1,2,3,4,5,6,7,8,9
        }
        cout<<endl;
        if(i<n)//1,2,3,4
        {
            spaces-=2;//8,6,4,2
        }
        else{
            spaces+=2;//0,2,4,6,8
        }
    }
        
    }
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern21(n);
    return 0;
}

/*
*         *
**       **
***     ***
****   ****
***** *****
****   ****
***     ***
**       **
*         *

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/