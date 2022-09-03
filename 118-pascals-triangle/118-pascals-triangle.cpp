class Solution {
public:
    vector<vector<int>>v;

    vector<vector<int>> generate(int numRows) {
        for(int i=0; i<numRows; i++)
        {
            vector<int>x(i+1,1);
            for(int j=1; j<i; j++)
            {
                x[j] = (v[i-1][j-1]+v[i-1][j]);
            }
            v.push_back(x);
        }
        return v;
    }
};