class Solution {
public:
    int firstUniqChar(string s) {
        int i,j;
        for(i=0; i<s.size(); i++)
        {
            int flag = 0;
            for(j=0; j<s.size(); j++)
            {
                if(i!=j && s[i] == s[j])
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                return i;
        }
        return -1;
    }
};