class Solution {
public:
    bool isValid(string s) {
        
        stack <char> stck;
        char t;
        for(auto x:s)
        {
            if(x == '(' || x =='{' || x == '[')
            {
                stck.push(x);
            }
            else
            {
                if(stck.empty())
                {
                    return false;
                }
                
                t = stck.top();
                if(x == ')')
                {
                    if(t=='(')
                    {
                        if (!stck.empty())
                        {
                        stck.pop();
                        }
                    }
                    else
                    {
                        return false;
                    }
                }
                else if(x == '}')
                {
                     if(t=='{')
                    {
                    if (!stck.empty())
                    {stck.pop();}
                    }
                    else
                    {
                        return false;
                    }
                }
                else if(x == ']')
                {
                     if(t=='[')
                    {
                        stck.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                    
                }
            }
        if (!stck.empty())
        {return false;}
        else
        {return true;}
    }
};