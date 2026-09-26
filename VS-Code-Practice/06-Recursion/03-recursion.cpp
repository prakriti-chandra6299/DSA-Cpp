//backtraking

#include <bits/stdc++.h>
using namespace std;
void printfun(int test){
    if(test<1)
    return ;
    else{
        cout<<test<<" ";
        printfun(test-1);
        cout<<test<<" ";
        return ;

    }
}
int main(){
    int test;
    cout<<"Enter a number to print the tests: ";
    cin>>test;
    printfun(test);
    return 0;
}