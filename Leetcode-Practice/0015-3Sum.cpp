#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class School{
    public:
    vector<vector<int>>threeSum(vector<int>& nums){
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            if( i>0 && nums[i]==nums[i-1])
            continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                long long sum=(long long)nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])
                        j++;
                    while(j<k && nums[k]==nums[k+1])
                        k--;
                    
                }
            }
        }
        return ans;
    }
};
int main(){
    // Test case
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    School sol;

    // Find all unique triplets that sum to zero
    vector<vector<int>> result = sol.threeSum(nums);

    // Print the result
    cout << "Unique triplets that sum to zero: " << endl;
    for (const auto& triplet : result) {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); ++i) {
            cout << triplet[i];
            if (i < triplet.size() - 1) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
/*
complexity:
time:O(n^2)
space:O(1)
output:
Unique triplets that sum to zero: 
[-1, -1, 2]
[-1, 0, 1]
*/