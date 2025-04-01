// Created by Madhin Prassana on 01/04/25.
// Leetcode -> 1. Two Sum

#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int Main() {
    Solution sol;
    vector <int> nums = {2, 7, 11, 15};
    int target = 9;
    vector <int> result = sol.twoSum(nums, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
