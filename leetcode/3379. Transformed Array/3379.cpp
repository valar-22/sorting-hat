#include <vector>
using namespace std;

/*
Constructs a transformed array result where result[i] is the element at
index (i + nums[i]) in the circular array nums.
- If nums[i] > 0, moves right.
- If nums[i] < 0, moves left.
- If nums[i] == 0, stays at the current index.

Time Complexity: O(N)
Space Complexity: O(N)
 */

class Solution {
public:
  vector<int> constructTransformedArray(vector<int> &nums) {

    int size = nums.size();
    vector<int> ans(size, 0);

    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] > 0) {
        ans[i] = nums[(i + nums[i]) % size];
      }
      if (nums[i] < 0) {
        int index = (i + nums[i]) % size;
        if (index < 0) {
          ans[i] = nums[size + index];
        } else {
          ans[i] = nums[index];
        }
      }
    }
    return ans;
  }
};
