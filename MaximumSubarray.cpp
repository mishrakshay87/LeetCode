class Solution {
  public:
    int maxSubArray(vector < int > & nums) {

      int max_so_far = nums[0];
      int max_global = nums[0];

      for (auto p = nums.begin() + 1; p != nums.end(); p++) {
        max_so_far = max( * p, max_so_far + * p);

        if (max_so_far > max_global)
          max_global = max_so_far;
      }
      return max_global;

    }
};