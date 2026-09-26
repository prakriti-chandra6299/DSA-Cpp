#include<iostream>
using namespace std;
void pattern13(int n){
    int space = 2*(n-1);//n=6 => 10 spaces
    int i,j;
    for(i=1;i<=n;i++){   //i=1,2,3,4,5,6 and i<=n=6
        for(j=1;j<=i;j++){   //j=1,2,3,4,5,6 and j<=i= 1,2,3,4,5,6
            cout<<j;
        }
        //spaces
        for(j=1;j<=space;j++){  //j=1,2,3,4,5,6,7,8,9,10 and j<=space= 10,8,6,4,2
            cout<<" ";
        }
        for(j=i;j>=1;j--){//j=1,2,3,4,5,6 and j>=1= 6,5,4,3,2,1
            cout<<j;
        }
        cout<<endl;
        space = space - 2;//space= 10,8,6,4,2,0
    }

}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern13(n);
    return 0;
}
/*

1          1
12        21
123      321
1234    4321
12345  54321
123456654321

*/
