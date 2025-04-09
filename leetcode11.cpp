// Created by Madhin Prassana on 10/04/25.
// Leetcode -> 70. Climbing Stairs

#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }
        int a = 1, b = 2;
        for (int i = 3; i <= n; i++) {
            int current = a + b;
            a = b;
            b = current;
        }
        return b;
    }
};

int Main() {
    Solution sol;
    int n;
    cout << sol.climbStairs(n) << endl;

    return 0;
}
