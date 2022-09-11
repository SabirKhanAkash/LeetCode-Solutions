class Solution {
public:
    bool isPowerOfThree(int n) {
        while(n>=3)
        {
            if(n%3 == 0)
                n = n/3;
            else
                return false;
        }
        if(n<1)
            return false;
        if(n == 2)
            return false;
        return true;
    }
};