/**
 * Problem Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
 * Platform     : LeetCode
 * Difficulty   : Hard
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0, e = nums.size() - 1, m = 0;
        int ans = nums[0];
        while (s < e) {
            m = s + (e - s) / 2;
           if (nums[m]<nums[e])
           {
            e=m;
           }
           else if(nums[m]>nums[e])
           {
            s=m+1;
           }
           else 
           {
            e--;
           }
        }
        return nums[e];
    }
};
