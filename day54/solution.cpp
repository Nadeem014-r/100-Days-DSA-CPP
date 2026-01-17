/*
--------------------------------------------------
Day 54 – Nth Fibonacci Number Using Recursion
Problem: Nth Fibonacci Number
Platform: GeeksforGeeks

Approach:
- Used the recursive definition of Fibonacci
- Defined clear base cases for n = 0 and n = 1
- Computed Fibonacci using recursive calls

Learning Focus:
- Understanding recursion flow and recursion tree
- Observing overlapping subproblems (inefficiency)

Note:
- This solution is for learning recursion basics
- Will optimize later using memoization / DP

Time Complexity: O(2^n)
Space Complexity: O(n) (recursion stack)
--------------------------------------------------
*/

class Solution {
  public:
    int nthFibonacci(int n) {
        // base cases
        if(n == 0)
            return 0;
        if(n == 1)
            return 1;

        // recursive call
        return nthFibonacci(n - 1) + nthFibonacci(n - 2);
    }
};
