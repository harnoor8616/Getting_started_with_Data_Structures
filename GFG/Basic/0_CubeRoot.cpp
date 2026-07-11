/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/cube-root-of-a-number0915/1
 * Platform     : GFG
 * Difficulty   : Basic
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int cubeRoot(int n) {
        // code here
        
        int s = 0;
        int e = n;

        while (s <= e) {
            int m = s + (e - s) / 2;
            long long cbr = 1LL * m * m *m;

            if (cbr == n)
                return m;

            if (cbr < n)
                s = m + 1;
            else
                e = m - 1;
        }
        return e;
    }
};
