class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int len = 0;
        int max_len = 0;
        vector<char> vec_ch;
        
        if(s.length() == 1)
            return 1;
        
        for(int i = 0 ; i< s.length();i++)
        {
            for(int j = i;j<s.length();j++)
          {
                if(!count(vec_ch.begin(),vec_ch.end(),s[j]))
                {
                    vec_ch.push_back(s[j]);
                    len += 1;
                }
                else
                {
                    if(max_len < len)
                    {
                        max_len = len;
                    }
                    vec_ch.clear();
                    len = 0;
                    break;
                }
            }
    }
        
    return max(len,max_len);
        
    }
    
};