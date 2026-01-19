/*
--------------------------------------------------
Day 56 – Find Largest Element in Array Using Recursion
Problem: Find the Largest Element in an Array
Platform: GeeksforGeeks

Approach:
- Used recursion to traverse the array
- Compared current element with maximum of remaining array
- Returned the larger value at each step

Learning Focus:
- Applying recursion on arrays
- Understanding how results propagate back in recursion

Time Complexity: O(n)
Space Complexity: O(n) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
    int helper(vector<int> &arr, int i) {
        // base case: last element
        if(i == arr.size() - 1)
            return arr[i];

        // recursive call
        int maxInRest = helper(arr, i + 1);

        // compare current element with rest
        return max(arr[i], maxInRest);
    }

    int largest(vector<int> &arr) {
        return helper(arr, 0);
    }
};
