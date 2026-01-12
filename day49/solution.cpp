/*
--------------------------------------------------
Day 49 – Merge Sort Algorithm
Problem: Implement Merge Sort
Platform: GeeksforGeeks

Approach:
- Used divide and conquer strategy
- Recursively divided the array into halves
- Merged sorted halves using an auxiliary array

Key Idea:
- Divide the problem into smaller parts and merge results

Time Complexity: O(n log n)
Space Complexity: O(n)
--------------------------------------------------
*/
class Solution {
  public:
    void merge(vector<int>& arr, int l, int mid, int r) {
        int n1 = mid - l + 1;
        int n2 = r - mid;

        vector<int> left(n1), right(n2);

        // copy data to temp arrays
        for(int i = 0; i < n1; i++)
            left[i] = arr[l + i];

        for(int j = 0; j < n2; j++)
            right[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = l;

        // merge the temp arrays back
        while(i < n1 && j < n2) {
            if(left[i] <= right[j])
                arr[k++] = left[i++];
            else
                arr[k++] = right[j++];
        }

        // copy remaining elements
        while(i < n1)
            arr[k++] = left[i++];

        while(j < n2)
            arr[k++] = right[j++];
    }

    void mergeSort(vector<int>& arr, int l, int r) {
        if(l < r) {
            int mid = l + (r - l) / 2;

            mergeSort(arr, l, mid);       // left half
            mergeSort(arr, mid + 1, r);   // right half

            merge(arr, l, mid, r);        // merge both halves
        }
    }
};
