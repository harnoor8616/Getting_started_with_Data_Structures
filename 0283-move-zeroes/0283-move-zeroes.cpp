class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int s = 0, e = 0;

        while(e < arr.size())
        {
            if(arr[e] != 0)
            {
                swap(arr[s], arr[e]);
                s++;
            }
            e++;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna