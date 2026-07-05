class Solution {
public:
    int reverse(int x) {
        int digit;
        int sum = 0;

        while (x != 0) {
            digit = x % 10;
            x /= 10;
            if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && digit > 7))
                return 0;

            if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && digit < -8))
                return 0;
            sum = sum * 10 + digit;
        }

        return sum;
    }
};