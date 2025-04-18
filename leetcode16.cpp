// Created by Madhin Prassana on 18/04/25.
// Leetcode -> 268. Missing Number

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n * (n + 1) / 2;
        int currentSum = 0;
        for (int num : nums) {
            currentSum += num;
        }
        return sum - currentSum;
    }
};

int Main() {
    Solution sol;
    vector<int> nums1 = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << sol.missingNumber(nums1) << endl;

    return 0;
}
