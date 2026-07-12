class Solution {
public:
    bool isPerfectSquare(int num) {
        int s=0,e=num,m=0;
        while(s<=e)
        {
            m=s+(e-s)/2;
            long long sq=1LL * m*m;
            if(sq==num)
            {
                return true;
            }
            else if(sq<num)
            {
                s=m+1;
            }
            else
            {
                e=m-1;
            }

        }
        return false;
    }
};