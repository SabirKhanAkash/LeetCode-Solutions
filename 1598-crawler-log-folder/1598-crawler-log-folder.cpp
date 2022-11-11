class Solution {
public:
    int minOperations(vector<string>& logs) {
        int dist = 0;
        for(int i=0; i<logs.size(); i++)
        {
            if(logs[i] == "../" && dist>0)
                dist--;
            else if(logs[i] == "./")
                dist += 0;
            else if(logs[i] != "../")
                dist++;
        }
        return dist;
    }
};