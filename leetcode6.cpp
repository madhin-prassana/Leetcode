// Created by Madhin Prassana on 03/04/25.
// Leetcode -> 9. Palindrome Number

#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int n = s.length();

        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - i - 1])
                return false;
        }
        return true;
    }
};

int Main() {
    Solution sol;
    int x;
    cout << "Enter an Integer: ";
    cin >> x;

    if (sol.isPalindrome(x)) {
        cout << x << " is a Palindrome " << endl;
    }
    else {
        cout << x << " is not a Palindrome " << endl;
    }
    return 0;
}
