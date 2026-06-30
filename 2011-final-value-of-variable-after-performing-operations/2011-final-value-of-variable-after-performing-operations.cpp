class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        vector<string>::iterator it1 = operations.begin();
        while(it1!=operations.end())
        {
            if(*it1=="++X")
            ++X;
            if(*it1=="X++")
            X++;
            if(*it1=="--X")
            --X;
            if(*it1=="X--")
            X--;
            it1++;
        }
        return X;
    }
};