class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s=0,e=0;
        while(e<nums.size())
        {
            if(nums[e]!=val)
            {
                swap(nums[s],nums[e]);
                s++;
            }
            e++;
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna