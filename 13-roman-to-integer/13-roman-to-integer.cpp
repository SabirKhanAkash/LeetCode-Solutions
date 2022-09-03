class Solution {
public:
    int romanToInt(string s) {
        int i,n=0;
        for(i=0;i<s.length();)
        {
            if(s[i]=='I')
            {
                if(s[i+1]=='V')
                {
                    n += 4;
                    i+=2;
                }

                else if(s[i+1]=='X')
                {
                    n += 9;
                    i+=2;
                }

                else
                {
                    n += 1;
                    i++;
                }
            }

            if(s[i]=='V')
            {
                n += 5;
                i++;
            }

            if(s[i]=='X')
            {
                if(s[i+1]=='L')
                {
                    n += 40;
                    i+=2;
                }

                else if(s[i+1]=='C')
                {
                    n += 90;
                    i += 2;
                }

                else
                {
                    n += 10;
                    i++;
                }

            }

            if(s[i]=='L')
            {
                n += 50;
                i++;
            }

            if(s[i]=='C')
            {
                if(s[i+1]=='D')
                {
                    n += 400;
                    i+=2;
                }

                else if(s[i+1]=='M')
                {
                    n += 900;
                    i+=2;
                }

                else
                {
                    n += 100;
                    i++;
                }
            }

            if(s[i]=='D')
            {
                n += 500;
                i++;
            }

            if(s[i]=='M')
            {
                n += 1000;
                i++;
            }

        }
        return n;
    }
};