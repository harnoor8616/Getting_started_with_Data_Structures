class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1, m = 0;
        while (s <= e) {
            m = s + (e - s) / 2;
            if (nums[m] == target) {
                return m;
            } else if (nums[m] >= nums[0]) {
                if (nums[s] <= target && nums[m] >= target) {
                    e = m - 1;
                } else {
                    s = m + 1;
                }
            } else {
                if (nums[m] <= target && nums[e] >= target) {
                    s = m + 1;
                } else {
                    e = m - 1;
                }
            }
        }
        return -1;
    }
};