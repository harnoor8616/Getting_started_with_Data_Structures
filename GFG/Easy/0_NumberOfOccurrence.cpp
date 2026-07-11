/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1
 * Platform     : GFG
 * Difficulty   : Easy
 */

#include <bits/stdc++.h>
using namespace std;

int countFreq(int arr[], int n, int target) {

    int s = 0, e = n - 1;
    int first = -1, last = -1;
    while (s <= e) {

        int m = s + (e - s) / 2;

        if (arr[m] == target) {
            first = m;
            e = m - 1;
        }
        else if (arr[m] > target)
            e = m - 1;
        else
            s = m + 1;
    }

    if (first == -1)
        return 0;

    s = 0;
    e = n - 1;

    while (s <= e) {

        int m = s + (e - s) / 2;

        if (arr[m] == target) {
            last = m;
            s = m + 1;
        }
        else if (arr[m] > target)
            e = m - 1;
        else
            s = m + 1;
    }

    return last - first + 1;
}
