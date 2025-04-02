// Created by Madhin Prassana on 02/04/25.
// Leetcode -> 3. Longest Substring without repeating characters

#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> str;
        int maxLength = 0, left = 0;

        for (int right = 0; right < s.length(); right++) {
            while (str.find(s[right]) != str.end()) {
                str.erase(s[left]);
                left++;
            }
            str.insert(s[right]);
            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};

int Main() {
    Solution sol;
    string s = "abcabcbb";
    cout << "Length of the Longest Substring without repeating characters: " << sol.lengthOfLongestSubstring(s) << endl;

    return 0;
}
