/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

int countZeroes(int arr[], int n) {
    // write code here
    
        int s = 0;
        int e = n - 1;
        int ans = n;

        while (s <= e) {

            int mid = s + (e - s) / 2;

            if (arr[mid] == 0) {
                ans = mid;
                e = mid - 1;
            }
            else {
                s = mid + 1;
            }
        }

        return n - ans;
}
