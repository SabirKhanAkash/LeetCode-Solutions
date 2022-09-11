class Solution {
public:
    uint32_t bin2dec(uint32_t n)
    {
        uint32_t sum = 0;
        for(int i=0; i<32 ; i++)
        {
            sum = sum<<1;
            sum = sum | n&1;
            // cout<<n<<" ";
            n = n>>1;
            
        }
        return sum;
    }
    
    uint32_t reverseBits(uint32_t n) {
        return bin2dec(n);
    }
};