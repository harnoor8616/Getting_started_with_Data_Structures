/**
 * Problem Link : https://leetcode.com/problems/search-insert-position/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0;int e= nums.size()-1;
        while(s<=e)
        {
            int m=(s+e)/2;
            if(nums[m]==target)
                return m;

            else if(target>nums[m])
                s=m+1;
            else if(target<nums[m])
                e=m-1;
        }
            return s;
        

        
    }
};
