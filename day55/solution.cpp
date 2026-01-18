/*
--------------------------------------------------
Day 55 – GCD Using Recursion
Problem: Find GCD of Two Numbers
Platform: GeeksforGeeks

Approach:
- Used Euclid’s Algorithm
- Recursively reduced the problem using gcd(b, a % b)
- Base case when b becomes zero

Learning Focus:
- Applying recursion to mathematical problems
- Understanding how problem size reduces at each step

Time Complexity: O(log(min(a, b)))
Space Complexity: O(log(min(a, b))) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
    int gcd(int a, int b) {
        // base case...
        if(b == 0)
            return a;

        // recursive call....
        return gcd(b, a % b);
    }
};
