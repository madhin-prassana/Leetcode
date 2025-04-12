// Created by Madhin Prassana on 12/04/25.
// Leetcode -> 258. Add Digits

#include <iostream>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
        return num;
    }
};

int Main() {
    Solution sol;
    int num1 = 38;
    cout << sol.addDigits(num1) << endl;

    return 0;
}
