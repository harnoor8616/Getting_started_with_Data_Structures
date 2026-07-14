/**
 * Problem Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {

        int s = 0;
        int e = nums.size() - 1;
        int ans = nums[0];

        while (s <= e) {

            int m = s + (e - s) / 2;

            ans = min(ans, nums[m]);

            if (nums[m] >= nums[0])
                s = m + 1;
            else
                e = m - 1;
        }

        return ans;
    }
};
