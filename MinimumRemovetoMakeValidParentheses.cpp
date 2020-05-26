class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        
        stack<pair<char,int>> stck;
        char temp;
        vector<int> vec;
        int pos = 0;
        int ind = 0;
        for(const auto& x:s)
        {
            if(x == '(')
                stck.push(make_pair('(',pos));
            
            else if(x==')')
            {
           
                if(!stck.empty())
                {
                    pair <char, int> p = stck.top();
                    if(p.first == '(')
                        stck.pop();
                    else
                        vec.push_back(pos);
                }
                else
                    vec.push_back(pos);
            }
            ++pos;
        }
        
        while(!stck.empty())
        {
            vec.push_back((stck.top()).second);
            stck.pop();
        }
    
        pos = 0;
        string output="";
    
        if(vec.size()>0){
            for(auto x:s)
            {
                if(std::find(vec.begin(),vec.end(),pos) == vec.end())
                {
                output += x;
                }
                ++pos;
            }
    }
        else
            output = s;
        
        return output;
        
    }
};