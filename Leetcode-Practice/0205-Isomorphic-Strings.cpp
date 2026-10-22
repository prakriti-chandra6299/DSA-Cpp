
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size())
            return false;

        int map1[256] = {0};
        int map2[256] = {0};

        for (int i = 0; i < s.size(); i++) {
            if (map1[s[i]] != map2[t[i]])
                return false;

            map1[s[i]] = i + 1;
            map2[t[i]] = i + 1;
        }

        return true;
    }
};

int main() {
    string s = "egg";
    string t = "add";

    Solution sol;
    cout << boolalpha << sol.isIsomorphic(s, t) << endl;

    return 0;
}
/*
Complexity:
- Time: O(n)
- Space: O(1) — both arrays have a fixed size of 256.
output:
true
*/