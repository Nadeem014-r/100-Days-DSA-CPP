/*
--------------------------------------------------
Day 47 – Insertion Sort Algorithm
Problem: Implement Insertion Sort
Platform: GeeksforGeeks

Approach:
- Treat the first element as sorted
- Pick the next element and insert it into its correct position
- Shift all larger elements one step to the right

Key Idea:
- Build the sorted array one element at a time

Time Complexity:
- Worst Case: O(n^2)
- Best Case: O(n) (already sorted)

Space Complexity: O(1)
--------------------------------------------------
*/
class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n = arr.size();

        for(int i = 1; i < n; i++) {
            int key = arr[i];     // element to be inserted
            int j = i - 1;

            // shift elements greater than key to one position ahead
            while(j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }

            arr[j + 1] = key;    // place key at correct position
        }
    }
};
