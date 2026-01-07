/*
--------------------------------------------------
Day 44 – Quick Sort Algorithm
Problem: Implement Quick Sort
Platform: GeeksforGeeks

Approach:
- Used Lomuto partition scheme
- Chose the last element as pivot
- Placed pivot at correct position and recursively sorted subarrays

Time Complexity:
- Average Case: O(n log n)
- Worst Case: O(n^2)

Space Complexity: O(log n) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if(low < high) {
            int p = partition(arr, low, high);  // partition index..

            quickSort(arr, low, p - 1);   // left subarray..
            quickSort(arr, p + 1, high);  // right subarray..
        }
    }

    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];   
        int i = low - 1;         

        for(int j = low; j < high; j++) {
            if(arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }

       
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }
};
