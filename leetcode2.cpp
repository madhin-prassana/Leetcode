// Created by Madhin Prassana on 31/03/25.
// Leetcode -> 125. Valid Palindrome

#include <string.h>
#include <iostream>

using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    string removeSplChar;

    for (char c : s) {
      if (isalnum(c)) {
        removeSplChar += tolower(c);
      }
    }

    int left = 0, right = removeSplChar.length() - 1;
    while (left < right) {
      if (removeSplChar[left] != removeSplChar[right]) {
        return false;
      }
      left++;
      right--;
    }
    return true;
  }
};

int Main() {
  Solution sol;
  string s = "A man, a plan, a canal: Panama";
  cout << boolalpha << sol.isPalindrome(s) << endl;

  return 0;
}