/*
--------------------------------------------------
Day 62 – Sum of Diagonals Using Recursion
Problem: Find Sum of Diagonals of a 4x4 Matrix
Platform: GeeksforGeeks

Approach:
- Used recursion to traverse matrix row by row
- Added primary diagonal element arr[i][i]
- Added secondary diagonal element arr[i][n-1-i]
- Avoided double counting when indices overlap

Learning Focus:
- Applying recursion to 2D arrays
- Handling matrix-based edge cases

Time Complexity: O(n)
Space Complexity: O(n) (recursion stack)
--------------------------------------------------
*/

// User function Template for C++

class Solution {
  public:
    int helper(int arr[4][4], int i) {
        // base case
        if(i == 4)
            return 0;

        // primary diagonal
        int sum = arr[i][i];

        // secondary diagonal (avoid double count)
        if(i != 3 - i)
            sum += arr[i][3 - i];

        // recursive call
        return sum + helper(arr, i + 1);
    }

    // Function to find sum of diagonals
    int diagonalSum(int arr[4][4]) {
        return helper(arr, 0);
    }
};
