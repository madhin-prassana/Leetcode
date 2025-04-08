// Created by Madhin Prassana on 08/04/25.
// Leetcode -> (Order)66. Plus One

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            else {
                digits[i] = 0;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

int Main() {
    Solution sol;
    vector<int> digits = {4, 3, 2, 1};
    for (int digit : sol.plusOne(digits)) {
        cout << digit << endl;
    }

    return 0;
}
