// Created by Madhin Prassana on 11/04/25.
// Leetcode -> 509. Fibonacci Number

#include <iostream>

using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1) {
            return 1;
        }
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};

int Main() {
    Solution sol;
    int n;
    cout << sol.fib(n) << endl;

    return 0;
}
