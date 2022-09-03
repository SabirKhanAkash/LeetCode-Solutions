class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        for(int i=0; i<s.size(); ++i)
        {
            if(s[i]>=48 && s[i]<=57)
                p.push_back(s[i]);
            
            if(s[i]>=97 && s[i]<=122 || s[i]>=65 && s[i]<=90)
            {
                p.push_back(tolower(s[i]));
            }
        }
        string palin;
        for(int i=p.size()-1;i>=0;--i)
        {
            palin.push_back(p[i]);
        }
        if(palin==p)
            return true;
        
        return false;
    }
};