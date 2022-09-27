class Solution {
public:
    string interpret(string command) {
        string res;
        int j=0;
        for(int i=0; i<command.size(); i++)
        {
            if(command[i] == 'G')
                command[j++] = 'G';
            
            else if(command[i] == '(' && command[i+1] == ')')
                command[j++] = 'o';
            else if(command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')') {
                command[j++] = 'a';
                command[j++] = 'l';
            }
            
        }
        command.erase(command.begin()+j,command.end());
        
        return command;
    }
};