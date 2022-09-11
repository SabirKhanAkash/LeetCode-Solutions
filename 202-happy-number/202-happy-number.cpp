class Solution {
public:
    int sq(int n)
    {
        int rem,sum=0;
        while(n!=0)
        {
            rem = n%10;
            sum = sum + rem*rem;
            n = n/10;
        }
        // cout<<sum<<endl;
        return sum;
    }
    
    bool isHappy(int n) {
        
        int rem,res,sum=0;
        while(n>=10)
            n = sq(n);
        
        if(n == 1 || n == 7)
            return true;
        else
            return false;
    }
};