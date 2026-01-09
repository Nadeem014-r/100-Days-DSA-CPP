/*
--------------------------------------------------
Day 46 – Bubble Sort Algorithm
Problem: Implement Bubble Sort
Platform: GeeksforGeeks

Approach:
- Compare adjacent elements
- Swap them if they are in the wrong order
- Repeat for all passes until array is sorted

Key Idea:
- Largest element bubbles to the end in each pass

Time Complexity: O(n^2)
Space Complexity: O(1)
--------------------------------------------------
*/
class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();

        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < n - i - 1; j++) {
                if(arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
};
