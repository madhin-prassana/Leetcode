// Created by Madhin Prassana on 05/04/25.
// Leetcode -> 67. Add Binary

#include <iostream>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string output = "";
        int n = a.size() - 1;
        int m = b.size() - 1;
        int carry = 0;
        while (n >= 0 || m >= 0 || carry) {
            int i = (n >= 0) ? a[n--] - '0' : 0;
            int j = (m >= 0) ? b[m--] - '0' : 0;

            int sum = i + j + carry;
            carry = sum/2;
            output = char((sum % 2) + '0') + output;
        }
        return output;
    }
};

int Main() {
    Solution sol;
    string a = "1010";
    string b = "1011";
    cout << sol.addBinary(a, b) << endl;

    return 0;
}
