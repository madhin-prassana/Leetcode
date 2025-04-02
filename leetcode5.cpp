// Created by Madhin Prassana on 02/04/25.
// Leetcode -> 2873. Maximum Value of an Ordered Triplet I

#include <iostream>

using namespace std;

class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long maxValue = 0;

        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    long long triplet = (long long) (nums[i] - nums[j]) * nums[k];
                    maxValue = max(maxValue, triplet);
                }
            }
        }
        return maxValue;
    }
};

int Main() {
    Solution sol;
    vector <int> nums = {12, 6, 1, 2 ,7};
    cout << sol.maximumTripletValue(nums) << endl;

    return 0;
}
