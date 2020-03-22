class Solution {
  public:
    bool canPermutePalindrome(string s) {

      map < char, int > mp_key;

      int n = s.length();
      int i = 0;

      for (i = 0; i < n; i++) {
        if (mp_key.count(s[i]) > 0) {
          mp_key[s[i]] += 1;
        } else {

          mp_key[s[i]] = 1;
        }

      }

      int c = 0;
      for (auto it = mp_key.begin(); it != mp_key.end(); it++) {
        if (it - > second % 2 != 0) {
          c += 1;
        }

      }

      if (c > 1)
        return false;
      else
        return true;
    }

};