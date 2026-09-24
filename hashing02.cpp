//character hashing
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
//precompute the hash array
    int hash[256]={0};
    for(int i= 0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        char c;
        cout<<"Enter the character to search: ";
        cin>>c;
        //fetch
        cout<<hash[c]<<endl;
    }
    return 0;
}