class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;
        int sum = 0;
        int val;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                val = score[score.size() - 1] + score[score.size() - 2];
                score.push_back(val);
                sum += val;
            }
            else if (operations[i] == "D") {
                val = 2 * score.back();
                score.push_back(val);
                sum += val;
            }
            else if (operations[i] == "C") {
                sum -= score.back();
                score.pop_back();
            }
            else {
                val = stoi(operations[i]);
                score.push_back(val);
                sum += val;
            }
        }
        return sum;
    }
};