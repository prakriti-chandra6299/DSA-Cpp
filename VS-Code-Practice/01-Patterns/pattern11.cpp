#include<iostream>
using namespace std;
void pattern11(int n){//n=6
    int i,j;
    for(i=1;i<=2*n-1;i++){//i=1,2,3,4,5,6,7,8,9,10,11 and i<=2*n-1= 11
        int stars =i;//i=1,2,3,4,5,6,7,8,9,10,11 and stars=i= 1,2,3,4,5,6,7,8,9,10,11
        if(i>n)//i=7,8,9,10,11 and i>n= 6
        stars = 2*n-i;  //i=7,8,9,10,11 and stars= 2*n-i= 5,4,3,2,1
        for(j=1;j<=stars;j++){//j=1,2,3,4,5,6,7,8,9,10,11 and j<=stars= 1,2,3,4,5
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern11(n);
    return 0;
}

/*
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 
* * * * * 
* * * * 
* * * 
* *
*
*/