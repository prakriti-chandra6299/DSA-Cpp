#include<iostream>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
         int days[] = {0, 31, 28, 31, 30, 31, 30,
                      31, 31, 30, 31, 30, 31};

        auto convert = [&](string date) {
            int month = stoi(date.substr(0, 2));
            int day = stoi(date.substr(3, 2));

            int total = day;

            for (int i = 1; i < month; i++) {
                total += days[i];
            }

            return total;
        };

        int start = max(convert(arriveAlice), convert(arriveBob));
        int end = min(convert(leaveAlice), convert(leaveBob));

        return max(0, end - start + 1);
    }
};
int main(){
  string arriveAlice = "08-15";
    string leaveAlice = "08-18";
    string arriveBob = "08-16";
    string leaveBob = "08-19";

    Solution sol;

    int result = sol.countDaysTogether(
        arriveAlice, leaveAlice, arriveBob, leaveBob
    );

    cout << result << endl;

    return 0;

}