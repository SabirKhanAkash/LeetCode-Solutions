class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>vc;
        unordered_map<string,vector<string>>mp;

        for(int i=0; i<strs.size(); i++)
        {
            string tmp = strs[i];
            sort(tmp.begin(),tmp.end());
            mp[tmp].push_back(strs[i]);
        }
        
        for(auto i : mp)
            vc.push_back(i.second);

        return vc;
    }
};