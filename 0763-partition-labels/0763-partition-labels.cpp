class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        vector<int>lastIndx(26,0);
        for(int i=0; i<s.size(); i++)
        {
            lastIndx[s[i] - 'a'] = i;
        }
        vector<int>ans;
        int size=0, end=0;
        
        for(int i=0; i<s.size(); i++)
        {
            end = max(end, lastIndx[s[i] - 'a']);
            
            if(i == end){
                ans.push_back(i - size+1);
                size = i+1;
            }
        }
        return ans;
    }
};