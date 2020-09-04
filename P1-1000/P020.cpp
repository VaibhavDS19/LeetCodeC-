class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        x.push('0');
        for(auto ch:s)
        {
            if(ch=='(' || ch=='{' || ch=='[')
                x.push(ch);
            else
            {
                if(x.top()==ch-1 || x.top()==ch-2)
                    x.pop();
                else
                    return false;
            }
        }
        return x.top()=='0';
    }
};
