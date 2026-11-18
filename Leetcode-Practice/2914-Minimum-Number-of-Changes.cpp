
#include <bits/stdc++.h>
using namespace std;

int minChanges(string s) {
    int count = 0;

    // Check every pair of adjacent characters
    for (int i = 0; i < s.length(); i += 2) {
        if (s[i] != s[i + 1]) {
            count++;
        }
    }

    return count;
}

int main() {
    string s = "1001";

    cout << "Minimum changes: " << minChanges(s) << endl;

    return 0;
}
/*
Complexity analysis:
Time	(O(n))	We check each pair once.
Space	(O(1))	Only one counter is used.
output:
Minimum changes: 2
*/