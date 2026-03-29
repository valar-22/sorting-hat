#include <string>

using namespace std;

/*
 Algorithm:

 The problem allows swapping characters at distance 2. Since the string length
 is 4, we can only swap index 0 with index 2, and index 1 with index 3. This
 gives exactly 4 possible valid configurations for s1 to match s2:
    1. No swaps (s1 == s2)
    2. Swap only indices 0 and 2
    3. Swap only indices 1 and 3
    4. Swap both (0 and 2, 1 and 3)

 Time Complexity: O(1)
 Space Complexity: O(1)
 */

class Solution {
public:
  bool canBeEqual(string s1, string s2) {
    if (s1 == s2) {
      return true;
    }

    if (s1[0] == s2[2] && s1[1] == s2[1] && s1[2] == s2[0] && s1[3] == s2[3]) {
      return true;
    }

    if (s1[0] == s2[0] && s1[1] == s2[3] && s1[2] == s2[2] && s1[3] == s2[1]) {
      return true;
    }

    if (s1[0] == s2[2] && s1[1] == s2[3] && s1[2] == s2[0] && s1[3] == s2[1]) {
      return true;
    }

    return false;
  }
};