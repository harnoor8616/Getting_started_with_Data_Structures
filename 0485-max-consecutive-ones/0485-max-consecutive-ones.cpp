class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0, freq = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                freq++;
            }

            if(nums[i] == 0)
            {
                if(freq > maxCount)
                {
                    maxCount = freq;
                }
                freq = 0;
            }
        }

        if(freq > maxCount)
        {
            maxCount = freq;
        }

        return maxCount;
    }
};