// Created by Madhin Prassana on 06/04/25.
// Leetcode -> 217. Contains Duplicate

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> parsed;
        for (int n : nums) {
            if(parsed.count(n) == 1) {
                return true;
            }
            parsed.insert(n);
        }
        return false;
    }
};

int Main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1};

    if (sol.containsDuplicate(nums)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    return 0;
}
