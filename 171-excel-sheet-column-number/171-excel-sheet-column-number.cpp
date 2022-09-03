class Solution {
public:
    int titleToNumber(string columnTitle) {
        int s=0;
        for(int i=0; i<columnTitle.size(); i++)
            s = 26*s + (columnTitle.at(i) - 'A' + 1);
            
        return s;
    }
};