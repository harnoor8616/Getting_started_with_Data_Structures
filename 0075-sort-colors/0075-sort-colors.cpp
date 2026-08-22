class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s = 0;
        int i = 0;
        int e = nums.size() - 1;

        while (i <= e) {
            if (nums[i] == 0) {
                swap(nums[i], nums[s]);
                s++;
                i++;
            }
            else if (nums[i] == 2) {
                swap(nums[i], nums[e]);
                e--;
            }
            else {
                i++;
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna