class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ss;
        ostringstream str1;
        for(int i = 1; i<=n; i++)
        {
            if(i%3 == 0 && i%5 == 0)
                ss.push_back("FizzBuzz");
            else if(i%3 == 0)
                ss.push_back("Fizz");
            else if(i%5 == 0)
                ss.push_back("Buzz");
            else
            {
                ss.push_back(to_string(i));
            }
                
        }
        return ss;
    }
};