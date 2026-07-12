/**
 * Problem Link : https://leetcode.com/problems/peak-index-in-a-mountain-array/
 * Platform     : LeetCode
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1,m=0;
        while(s<=e)
        {
            m=s+(e-s)/2;
            if(arr[m]>arr[m+1] & arr[m]>arr[m-1])
            {
                return m;
            }
            else if(arr[m]>arr[m-1] & arr[m]<arr[m-1])
            {
                s=m+1;

            }
            else 
            {
                e=m-1;
            }
        }
        return m;
    }
};
