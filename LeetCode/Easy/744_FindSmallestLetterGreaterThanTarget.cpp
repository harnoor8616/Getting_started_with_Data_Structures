/**
 * Problem Link : https://leetcode.com/problems/find-smallest-letter-greater-than-target/
 * Platform     : LeetCode
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int s=0,e=letters.size()-1,m=0;
        while(s<=e)
        {
            m=s+(e-s)/2;
            if(letters[m]<=target)
            {
                s=m+1;
            }
            else if(letters[m]> target)
            {
                e=m-1;
            }
        }
        return letters[s%letters.size()];
    }
};
