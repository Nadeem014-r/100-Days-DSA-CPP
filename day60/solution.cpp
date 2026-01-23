/*
--------------------------------------------------
Day 60 – Binary Search Using Recursion
Problem: Binary Search
Platform: GeeksforGeeks

Approach:
- Applied binary search recursively on a sorted array
- Compared middle element with target value
- Reduced search space by half in each recursive call

Learning Focus:
- Understanding divide and conquer using recursion
- Strengthening recursion with logarithmic problems

Time Complexity: O(log n)
Space Complexity: O(log n) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
    int helper(vector<int> &arr, int low, int high, int k) {
        // base case: element not found
        if(low > high)
            return -1;

        int mid = low + (high - low) / 2;

        // element found
        if(arr[mid] == k)
            return mid;

        // search left half
        if(arr[mid] > k)
            return helper(arr, low, mid - 1, k);

        // search right half
        return helper(arr, mid + 1, high, k);
    }

    int binarysearch(vector<int> &arr, int k) {
        return helper(arr, 0, arr.size() - 1, k);
    }
};
