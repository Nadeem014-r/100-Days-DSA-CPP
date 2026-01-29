// Josephus Problem (Recursion)
//
// Base Case:
// If only one person remains, answer is 1.
//
// Idea:
// Solve the problem for (n - 1) people,
// then adjust the position by k steps.
//
// Formula:
// josephus(n, k) = (josephus(n - 1, k) + k - 1) % n + 1
//
// Key Learning:
// Recursive answers can be shifted
// while returning through the call stack.
class Solution {
public:
    int josephus(int n, int k) {
        // base case
        if (n == 1)
            return 1;

        // recursive relation
        return (josephus(n - 1, k) + k - 1) % n + 1;
    }
};
