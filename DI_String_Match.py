class Solution {
public:
    vector<int> diStringMatch(string S) {
        
        vector<int> vec_out;
        vector<int> vec_v;
        int n = S.length();
        char cstr[n+1];
        strcpy(cstr,S.c_str());
        int r_count = n;
        int l_count = 0;
        
        for(int i =0;i<n+1;i++)
        {
            vec_out.push_back(i);
        }        
        
         for(int i =0;i<n+1;i++)
        {
             if(cstr[i] == 'I')
             {
                vec_v.push_back(vec_out[l_count]);
                cout<<vec_out[l_count];
                ++l_count;
             }
             else
             {
                 vec_v.push_back(vec_out[r_count]);
                 cout<<vec_out[r_count];
                 --r_count;
             }    
        } 
    return vec_v;
    }
};
