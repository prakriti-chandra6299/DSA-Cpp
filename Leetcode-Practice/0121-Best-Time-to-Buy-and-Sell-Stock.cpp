#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    int maxProfit(vector<int>& prices){
        int mini = prices[0];
        int profit=0;
        //Iterate through the prices to find the maximum profit
        for(int i=1;i<prices.size();i++){
            int cost=prices[i]-mini;
            //Update the maximum profit if the current cost is greater than the previous maximum profit
            profit=max(profit,cost);
            mini=min(mini,prices[i]);
        }
        return profit;
    }
};
int main(){
    //Test case
    vector<int>prices={7,1,5,3,6,4};
    Solution sol;
    //Find the maximum profit
    int maxProfit = sol.maxProfit(prices);
    //print the result
    cout<<"Maximum Profit: "<<maxProfit<<endl;
    return 0;
}
/*

complexity:
Time:  O(n)
Space: O(1)
output:
Maximum Profit: 5
key idea:
algorithm: Single Pass
*/
