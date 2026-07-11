class Solution {
public:
    int mySqrt(int x) {

        int s = 0;
        int e = x;

        while (s <= e) {
            int m = s + (e - s) / 2;
            long long sq = 1LL * m * m;

            if (sq == x)
                return m;

            if (sq < x)
                s = m + 1;
            else
                e = m - 1;
        }
        return e;
    }
};