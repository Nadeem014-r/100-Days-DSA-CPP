/*
--------------------------------------------------
Day 48 – Selection Sort Algorithm
Problem: Implement Selection Sort
Platform: GeeksforGeeks

Approach:
- Divide the array into sorted and unsorted parts
- Repeatedly find the minimum element from the unsorted part
- Swap it with the first unsorted position

Key Idea:
- Select the minimum element and place it correctly

Time Complexity: O(n^2)
Space Complexity: O(1)
--------------------------------------------------
*/

class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        int n = arr.size();

        for(int i = 0; i < n - 1; i++) {
            int minIndex = i;

            // find minimum element in remaining array
            for(int j = i + 1; j < n; j++) {
                if(arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }

            // swap minimum element with first unsorted element
            swap(arr[i], arr[minIndex]);
        }
    }
};
