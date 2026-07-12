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
        int s=0,e=x,m=0;
        while(s<=e)
        {
            m=s+(e-s)/2;
            long long sq=1LL * m *m;
            if(sq==x)
            {
                return m;
            }
            else if(sq<x)
            {
                s=m+1;
            }
            else 
            {
                e=m-1;
            }

        }
        return e;
    }

};
