/**
 * Problem Link : https://practice.geeksforgeeks.org/problems/minimum-swaps/1
 * Platform     : GFG
 * Difficulty   : Medium
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
	public:
	int minSwaps(vector<int>& arr) {
		// Code here
		int swapp = 0;
		vector<pair<int, int>> v(arr.size());
		for (int i = 0; i<arr.size(); i++)
			{
			v[i] = {arr[i], i};
		}
		sort(v.begin(), v.end());
		for (int j = 0; j < arr.size(); j++)
			{
			while (v[j].second != j)
				{
				swapp++;
				swap(v[j], v[v[j].second]);
			}
		}
		return swapp;
	}
};

