#include<iostream>
using namespace std;
void pattern18(int n){
    int i,j;
    //space pattern
    for(i=0;i<n;i++){//0,1,2,3,4
        for(j=0;j<n-i-1;j++){//4,3,2,1,0
            cout<<" ";
        }
        //character pattern
        char ch ='A';
        int breakpoint=(2*i+1)/2;//0,1,2,3,4;
         for(j=0;j<2*i+1;j++){//0,1,2,3,4,5,6,7,8
            cout<<ch;
            if(j<breakpoint){//0<0,1<1,2<2,3<3,4<4
                ch++;
            }
            else{
                ch--;
            }
        }
        //space pattern
        for(j=0;j<n-i-1;j++){//4,3,2,1,0
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;//5
    cout<<"Enter the number of rows: ";
    cin>>n;
    pattern18(n);
    return 0;
}

/*
  A   
  ABA  
 ABCBA 
ABCDCBA


*/