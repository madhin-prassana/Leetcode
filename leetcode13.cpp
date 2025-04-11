// Created by Madhin Prassana on 11/04/25.
// Leetcode -> 2843. Count Symmetric Integers

#include <iostream>

using namespace std;

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for (int i = low; i <= high; i++) {
            string s = to_string(i);
            int len = s.size();
            if (len % 2 != 0) {
                continue;
            }
            int middle = len / 2;
            int a = 0, b = 0;
            for (int j = 0; j < middle; j++) {
                a += s[j] - '0';
                b += s[middle + j] - '0';
            }
            if (a == b) {
                count ++;
            }
        }
        return count;
    }
};

int Main() {
    Solution sol;
    int low1 = 1, high1 = 100;
    cout << sol.countSymmetricIntegers(low1, high1) << endl;

    return 0;
}
