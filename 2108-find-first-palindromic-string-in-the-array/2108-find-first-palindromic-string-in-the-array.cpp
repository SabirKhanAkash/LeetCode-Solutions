class Solution {
public:
    int isPal(string s)
    {
        string p;
        int j=0;
        for(int i=s.size()-1; i>=0; i--)
        {
            p.push_back(s[i]);
        }
        if(s==p)
            return 1;
        else
            return 0;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto i=words.begin(); i!=words.end(); i++)
        {
            if(isPal(*i) == 1)
                return *i;
        }
        return "";
    }
};