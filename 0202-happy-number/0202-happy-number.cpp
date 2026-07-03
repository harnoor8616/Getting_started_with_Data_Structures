class Solution {
public:
    bool isHappy(int n) {
        set<int> repeat;

        while (n != 1) {

            if (repeat.count(n))
                return false;

            repeat.insert(n);

            int sum = 0;

            while (n != 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }

            n = sum;
        }

        return true;
    }
};