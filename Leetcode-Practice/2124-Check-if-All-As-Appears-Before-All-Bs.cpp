
#include <bits/stdc++.h>
using namespace std;

bool checkString(string s) {
    bool foundB = false;

    for (char ch : s) {
        if (ch == 'b') {
            foundB = true;
        }
        else if (ch == 'a' && foundB) {
            return false;
        }
    }

    return true;
}

int main() {
    string s = "aaabbb";

    if (checkString(s)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

    return 0;
}
/*
Complexity Analysis
- Time Complexity: O(n) — one traversal of the string.
- Space Complexity: O(1) — only a few variables.
Output:
true

*/