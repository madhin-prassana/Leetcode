// Created by Madhin Prassana on 16/04/25.
// Leetcode -> 263. Ugly Number

#include <iostream>

using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) {
            return false;
        }
        while (n % 2 == 0) {
            n /= 2;
        }
        while (n % 3 == 0) {
            n /= 3;
        }
        while (n % 5 == 0) {
            n /= 5;
        }
        return n == 1;
    }
};

int Main() {
    Solution sol;
    int n1 = 14;
    cout << sol.isUgly(n1) << endl;

    return 0;
}
