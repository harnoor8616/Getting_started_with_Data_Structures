class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> suffix(nums.size());

        suffix[0] = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            suffix[i] = suffix[i - 1] + nums[i];
        }

        return suffix;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna