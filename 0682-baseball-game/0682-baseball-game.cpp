class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>s;
        int sum=0,x;
        
        for(int i=0; i<operations.size(); i++)
        {
            if(operations[i] != "+" && operations[i] != "C" && operations[i] != "D")
            {
                stringstream geek(operations[i]);
                geek >> x;
                cout<<x<<" ";
                s.push(x);
            }
            
            if(operations[i] == "C")
                s.pop();

            if(operations[i] == "D")
                s.push(s.top()*2);

            if(operations[i] == "+")
            {
                int temp = s.top();
                s.pop();
                int temp2 = s.top();
                s.push(temp);
                s.push(temp+temp2);
            }
        }

        while(!s.empty())
        {
            sum += s.top();
            s.pop();
        }
        
        return sum;
    }
};