class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxSum = -1e9;
        int sum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum += nums.at(i);
            //cout<<"s: "<<sum<<" ps: "<<prevSum<<endl;
            if(maxSum<sum)
                maxSum = sum;
            if(sum<0)
                sum = 0;
        }
        return maxSum;
    }
};