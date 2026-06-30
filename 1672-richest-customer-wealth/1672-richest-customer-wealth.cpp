class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<vector<int>>::iterator it= accounts.begin();
        int wealth=0;
        int max_wealth=0;
        while(it!=accounts.end())
        {
            wealth=0;
            for(int i=0;i<it->size();i++)
            {
                wealth=((*it)[i]) + wealth;
            }
            if(wealth>max_wealth)
            {
                max_wealth=wealth;
            }
            it++;
        }
        return max_wealth;
    }
};