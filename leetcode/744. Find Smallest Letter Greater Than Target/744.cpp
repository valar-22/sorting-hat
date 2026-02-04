#include <vector>
using namespace std;
/*
Finds the smallest character in a sorted array that is strictly greater than the
target. If no such character exists, it returns the first element of the array.

It's not necessary to use a binary search since the max size of letters is 104,
so we can get the answer in one for loop.

Time Complexity: O(N)
Space Complexity: O(1)
*/
class Solution {
public:
  char nextGreatestLetter(vector<char> &letters, char target) {
    for (int i = 0; i < letters.size(); i++) {
      if (letters[i] > target) {
        return letters[i];
      }
    }
    return letters[0];
  }
};
