/*
--------------------------------------------------
Day 45 – Find Peak Element in an Array
Problem: Peak Element
Platform: GeeksforGeeks

Definition:
- A peak element is an element that is greater than or equal to its neighbors.

Approach:
- Used Binary Search technique
- If mid element is smaller than next, peak lies on the right
- Otherwise, peak lies on the left or at mid

Time Complexity: O(log n)
Space Complexity: O(1)
--------------------------------------------------
*/

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();
        int low = 0, high = n - 1;

        while (low < high) {
            int mid = (low + high) / 2;

            if (arr[mid] < arr[mid + 1])
                low = mid + 1;   // peak is on right side
            else
                high = mid;      // peak is on left side or mid
        }

        return low;  // or high (both same)
    }
};
