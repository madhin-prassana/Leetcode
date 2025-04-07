// Created by Madhin Prassana on 07/04/25.
// Leetcode -> 136. Single Number

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int singleNumber(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
      int count = 0;
      for (int j = 0; j < nums.size(); j++) {
        if (nums[i] == nums[j]) {
          count++;
        }
      }
      if (count == 1) {
        return nums[i];
      }
    }
    return 0;
  }
};

int Main() {
  Solution sol;
  vector<int> nums = {4, 1, 2, 1, 2};
  cout << sol.singleNumber(nums) << endl;

  return 0;
}