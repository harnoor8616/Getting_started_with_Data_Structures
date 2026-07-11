/**
 * Problem Link : https://leetcode.com/problems/sqrtx/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int s=0,e=x;
        while(s<=e)
        {
            int m = s+(e-s)/2;
            if(m*m==x)
            {
                return m;
            }
            else if(m*m > x)
            {
                e=m-1;
            }
            else if(m*m < x)
            {
                s=m+1;
            }
        }
        return m-1;
    }
};
