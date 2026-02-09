#include <algorithm>
#include <vector>
using namespace std;

/**
Calculates the minimum number of elements to remove from the array so that
it satisfies the balance condition relative to k.

Time Complexity: O(n log n), where n is the size of the input array, due to
sorting. The subsequent two-pointer moves takes O(n) time so it doesn't add any
complexity.
*/

class Solution {
public:
  int minRemoval(vector<int> &nums, int k) {
    int ans = nums.size();
    long long max;
    sort(nums.begin(), nums.end());
    int j = 0;
    for (int i = 0; i < nums.size(); i++) {
      max = (long long)nums[i] * k;
      while (j < nums.size() && nums[j] <= max) {
        j++;
      }
      int tans = nums.size() - (j - i);
      if (tans < ans) {
        ans = tans;
      }
    }
    return ans;
  }
};