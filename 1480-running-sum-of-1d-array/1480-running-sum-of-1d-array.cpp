class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>::iterator it =nums.begin();
        vector<int>::iterator it1 =nums.begin();

        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i]+nums[i - 1];
        }
        return nums;
    }
};