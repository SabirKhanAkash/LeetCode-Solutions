class Solution {
public:
    string reverseVowels(string s) {
        vector<char>v;
        for(int i=0; i<s.size(); i++)
            if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'i' || s[i] == 'I' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u')
                v.push_back(s[i]);


        reverse(v.begin(),v.end());

        for(int i=0,j=0; i<s.size(); i++)
            if(s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'i' || s[i] == 'I' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u')
                s[i] = v[j++];

        return s;
    }
};