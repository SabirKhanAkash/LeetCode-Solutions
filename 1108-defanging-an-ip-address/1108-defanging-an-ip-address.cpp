class Solution {
public:
    string defangIPaddr(string address) {
        for(int i=0; i<address.size(); i++)
            if(address[i] == '.') address.insert(i+1,"]");
        
        for(int j=address.size()-1; j>=0; j--)
            if(address[j] == '.') address.insert(j,"[");
        
        return address;
    }
};