class Solution {
public:
    int mySqrt(int x) {

        long long low=0, high=x,mid;
        if(x<2)
            return x;
        while(low<high)
        {
            mid = low + (high - low + 1)/2;
            if(mid*mid <= (long long)x)
                low = mid;
            else
                high = mid - 1;
        }
        return high;
    }
};