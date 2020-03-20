#include <math.h>
class Solution {
public:
    bool isHappy(int n)
    {

        map<int, int> mp;
        while (n != 1) {
            if (mp.find(n) != mp.end()) {
                return false;
            }
            else {
                mp[n] = mp[n] + 1;
            }
            stack<int> stck;
            int j = 0;
            int sum_sq = 0;
            int rem = 0;
            while (n != 0) {
                rem = n % 10;
                n = n / 10;
                stck.push(rem);
            }

            int stck_size = stck.size();

            for (j = 0; j < stck_size; j++) {

                sum_sq = sum_sq + pow(stck.top(), 2);
                stck.pop();
            }

            n = sum_sq;
        }

        return true;
    }
};