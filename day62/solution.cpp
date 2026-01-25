/*
--------------------------------------------------
Day 62 – Count Ways to Reach N (Recursion Basics)
Problem: Count Ways (Staircase Problem)
Platform: GeeksforGeeks

Approach:
- Used pure recursion to understand problem breakdown
- Defined clear base cases for valid and invalid paths
- Observed overlapping subproblems leading to inefficiency

Learning Focus:
- Understanding recursion trees
- Realizing why naive recursion leads to TLE
- Motivation to learn optimization (DP)

Note:
- This solution is for learning recursion, not optimized
- Will be improved using memoization / DP

Time Complexity: O(2^n)
Space Complexity: O(n) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
    int countWays(int n) {
        // base cases
        if(n == 0)
            return 1;   // one valid way (do nothing)
        if(n < 0)
            return 0;   // invalid path

        // recursive calls
        return countWays(n - 1) + countWays(n - 2);
    }
};
