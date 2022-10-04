class Solution {
public:
    vector<vector<int>> rotate(vector<vector<int>>& m)
    {
        reverse(m.begin(),m.end());
        for(int i=0; i<m.size(); i++)
            for(int j=i+1; j<m.size(); j++)
                swap(m[i][j],m[j][i]);
        return m;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0; i<4; i++)
            if(rotate(mat) == target)
                return true;
        return false;
    }
};