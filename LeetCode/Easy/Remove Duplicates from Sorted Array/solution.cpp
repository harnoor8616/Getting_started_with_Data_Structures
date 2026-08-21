class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int s=0,e=1;
        while(e<arr.size())
        {
            if(arr[s]==arr[e])
            {
                e++;
            }
            else
            {
                s++;
                swap(arr[s],arr[e]);
                e++;
            }
        }
        return s+1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna