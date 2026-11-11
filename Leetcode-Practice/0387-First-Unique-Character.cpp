#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};
        // Count frequency of each character
        for (char ch : s) {
            freq[ch - 'a']++;
        }
        // Find the first non-repeating character
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution obj;

    string s = "leetcode";

    int result = obj.firstUniqChar(s);

    cout << "First unique character index: " << result << endl;

    return 0;
}

/*
output:First unique character index: 0

complexity:
Time: O(n)
Space: O(1)
*/