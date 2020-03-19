class Solution {
public:
    string removeDuplicates(string S) {
       
        stack<char> stck;
        char test_char='\0';
        int n = S.length();
        string s_out="";
        for( int i =0; i< n ; i++)
        {
            if(stck.empty())
            {
                stck.push(S[i]);
                
            }
            else
            {
                test_char = stck.top();
                if(test_char == S[i])
                {
                    stck.pop();
                    
                }
                
                else
                {
                    stck.push(S[i]);   
                }   
            }
        }
        
        
        while(!stck.empty())
        {
            cout<<stck.top()<<endl;
            s_out = stck.top() + s_out;
            stck.pop();
            
        }
        
        return s_out;
    }
        
        
       
};