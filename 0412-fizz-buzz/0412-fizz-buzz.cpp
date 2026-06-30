class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>answer;
        for(int i=1;i<=n;i++)
        {
            if(i%3==0 && i%5==0)
            {
                answer.push_back("FizzBuzz");
                continue;
            }
            else if(i%3==0)
            {
                answer.push_back("Fizz");
                continue;
            }
            else if(i%5==0)
            {
                answer.push_back("Buzz");
                continue;
            }
            else
            {
                answer.push_back(to_string(i));
                continue;
            }
        }
        return answer;
    }
};