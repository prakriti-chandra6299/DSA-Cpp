#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution{
    public:
    bool isAnagram(string s,string t){
        if(s.size()!=t.size())
        return false;

        int hash[26]={0};
        for(int i=0;i<s.size();i++){
            hash[s[i]-'a']++;
            hash[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(hash[i]!=0)
            return false;
        }
        return true;
    }
};
int main(){
    string s="anagram";
    string t="nagaram";
    Solution sol;
    cout << boolalpha << sol.isAnagram(s, t) << endl;

    return 0;
}
/*
complexity:
Time: O(n) - where n is the length of the input strings s and t. We iterate through both strings once to populate the hash array, and then we iterate through the hash array of fixed size 26.
Space: O(1) - we use a fixed-size array of 26 integers to store
output:
true

*/
