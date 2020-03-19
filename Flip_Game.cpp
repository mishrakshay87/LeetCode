class Solution {
public:
    vector<string> generatePossibleNextMoves(string s) {
        
        vector<string> vec;
        int n = s.length();
    
        for(int i = 0; i < n-1; i++)
        {
            string s2 = s;
            if((s[i] =='+') && (s[i+1]=='+'))
            {
                s2[i] = '-';
                s2[i+1] = '-';
                vec.push_back(s2);
                cout<<s2<<endl;
            }
        }
        return vec;
    }
};