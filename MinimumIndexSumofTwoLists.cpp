class Solution {
  public:
    vector < string > findRestaurant(vector < string > & list1, vector < string > & list2) {

      vector < string > vec_str;
      int n1 = list1.size();
      int n2 = list2.size();
      int i = 0;
      int j = 0;

      int min_index = 3000;
      int k = 0;

      for (i = 0; i < n1; i++) {

        for (j = 0; j < n2; j++) {

          if (list1[i] == list2[j]) {
            cout << list1[i] << endl;
            if (i + j <= min_index) {
              min_index = i + j;
              k = i;
              vec_str.push_back(list1[i]);
            }
          }
        }
      }

      return vec_str;
    }
};