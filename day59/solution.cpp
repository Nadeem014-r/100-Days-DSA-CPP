/*
--------------------------------------------------
Day 59 – Linear Search Using Recursion
Problem: Search an Element in an Array
Platform: GeeksforGeeks

Approach:
- Used recursion to traverse the array element by element
- Compared the target value with current index value
- Returned index when element is found, else continued recursion

Learning Focus:
- Applying recursion to basic searching problems
- Understanding base condition when element is not found

Time Complexity: O(n)
Space Complexity: O(n) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
    int helper(vector<int>& arr, int x, int i) {
        // base case: reached end of array
        if(i == arr.size())
            return -1;

        // if element found..........
        if(arr[i] == x)
            return i;

        // recursive call.........
        return helper(arr, x, i + 1);
    }

    int search(vector<int>& arr, int x) {
        return helper(arr, x, 0);
    }
};
