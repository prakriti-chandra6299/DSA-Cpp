#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        
        int left = 0;
        int right = s.size() - 1;

        while(left < right) {
            while(left < right && !isalnum(s[left]))
                left++;
            while(left < right && !isalnum(s[right]))
                right--;
            if(tolower(s[left]) != tolower(s[right]))
                return false;
            left++;
            right--;
        }

        return true;
    

    }
};
int main(){
    string s = "A man, a plan, a canal: Panama";

    Solution sol;
    cout << boolalpha << sol.isPalindrome(s) << endl;

    return 0;
}
/*
Complexity:
- Time: O(n)
- Space: O(1) auxiliary space.
output:
true
*/