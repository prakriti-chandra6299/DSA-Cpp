#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return false;
        }

        int original = x;
        long long reversed = 0;

        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        return original == reversed;
    }
};

int main() {
    Solution obj;

    int x = 121;

    bool result = obj.isPalindrome(x);

    cout << boolalpha;
    cout << "Is palindrome: " << result << endl;

    return 0;
}

/*
Complexity Analysis
- Time Complexity: (O(log_{10} x))
- Space Complexity: (O(1))
Output:
Is palindrome: true
*/