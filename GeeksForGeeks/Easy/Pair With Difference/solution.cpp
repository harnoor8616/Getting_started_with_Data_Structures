class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        sort(arr.begin(), arr.end());

        int s = 0;
        int e = 1;

        while (e < arr.size()) {

            if (s == e) {
                e++;
                continue;
            }

            int diff = arr[e] - arr[s];

            if (diff == x) {
                return true;
            }
            else if (diff < x) {
                e++;
            }
            else {
                s++;
            }
        }

        return false;
    }
};