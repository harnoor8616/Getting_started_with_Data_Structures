class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return 0;
        int s = 0;
        int e = n - 1;
        while (s <= e) {
            int m = s + (e - s) / 2;
            if ((m == 0 || nums[m] > nums[m - 1]) &&
                (m == n - 1 || nums[m] > nums[m + 1])) {
                return m;
            }
            if (m < n - 1 && nums[m] < nums[m + 1]) {
                s = m + 1;
            }
            else {
                e = m - 1;
            }
        }
        return -1;
    }
};