class Solution {
public:
    string convertToTitle(int columnNumber) {
        string output;
        while(columnNumber > 0) {
            columnNumber--;
            int current = columnNumber % 26;
            columnNumber /= 26;
            output.push_back(current + 'A');
        }
        reverse(output.begin(), output.end());
        return output;
    }
};