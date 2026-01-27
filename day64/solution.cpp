/*
--------------------------------------------------
Day 64 – Tower of Hanoi Using Recursion
Problem: Tower of Hanoi
Platform: GeeksforGeeks

Approach:
- Recursively move n-1 disks to auxiliary rod
- Move the largest disk to destination rod
- Move n-1 disks from auxiliary to destination

Learning Focus:
- Understanding pure recursion and problem decomposition
- Visualizing recursive calls and the call stack

Key Insight:
- Total moves required = 2^n - 1

Time Complexity: O(2^n)
Space Complexity: O(n) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // base case: no disks
        if(n == 0)
            return 0;

        // move n-1 disks from 'from' to 'aux'......
        int moves = towerOfHanoi(n - 1, from, aux, to);

        // move the nth disk from 'from' to 'to'.....
        moves += 1;

        // move n-1 disks from 'aux' to 'to'........
        moves += towerOfHanoi(n - 1, aux, to, from);

        return moves;
    }
};
