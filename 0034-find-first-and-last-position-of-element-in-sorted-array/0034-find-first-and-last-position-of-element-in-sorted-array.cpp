class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1,m=0;
        int first=-1,last=-1;
        while(s<=e)
        {
            m=s+(e-s)/2;
            if(nums[m]==target)
            {
                first = m;
                e=m-1;
            }
            else if(nums[m]>target)
            {
                e=m-1;
            }
            else 
            {
                s=m+1;
            }
        }
        s=0,e=nums.size()-1,m=0;
        while(s<=e)
        {
            m=s+(e-s)/2;
            if(nums[m]==target)
            {
                last = m;
                s=m+1;
            }
            else if(nums[m]>target)
            {
                e=m-1;
            }
            else 
            {
                s=m+1;
            }
        }
        return {first,last};
    }
};