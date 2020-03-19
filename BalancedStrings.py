//1221. Split a String in Balanced Strings

class Solution {
public:
    int balancedStringSplit(string s) {
        
        stack <int> st;
        
        int n = s.length(); 
        int r = 0;
        int l = 0;
        int c = 0;
        int a_curr = 0;
        
        char char_array[n + 1]; 
        
        strcpy(char_array, s.c_str()); 
        int i =0;
        for(i = 0; i < n; i++)
        {
            st.push(char_array[i]);
        }
        while (!st.empty())
        {
            a_curr = st.top();
            st.pop();
            
            if (a_curr == 'R')
            {
                r = r + 1;   
            }
            else if (a_curr == 'L')
            {
                l = l + 1;
            }
            
            if( r == l)
            {
                c = c + 1;
                r = 0;
                l = 0;
            }
        }
    
        return c;       
}
};
