class Solution {
public:
    int calculateTime(string keyboard, string word) {
        
        int i = 0;
        int j = 0;
        int nk = keyboard.length();
        int nw = word.length();
        int last_wrd = 0;
        int sum_wrd = 0;
        for(i = 0; i < nw; i++)
        {
            for(j = 0 ; j < nk; j++)
            {
                if(keyboard[j] == word[i])
                {
                    sum_wrd += abs(j - last_wrd);
                    last_wrd = j;
                    break;   
                }   
            }   
        }
       return  sum_wrd;
    }
};