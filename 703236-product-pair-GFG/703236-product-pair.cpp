class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        // code here
        sort(arr.begin(),arr.end());
        int s=0;
        int e=arr.size()-1;
        while(s<e)
        {
            long long mul = 1LL* arr[s]*arr[e];
            if(mul==target)
            {
                return true;
            }
            else if(mul<target)
            {
                s++;
            }
            else 
            {
                e--;
            }
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna