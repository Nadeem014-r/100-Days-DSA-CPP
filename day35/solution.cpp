/*
--------------------------------------------------
Day 35 – First Occurrence Using Binary Search
Problem: Find the First Occurrence of an Element in a Sorted Array
Platform: GeeksforGeeks

Approach:
- Use modified binary search
- When target is found, continue searching in the left half
- Store the index to get the first occurrence

Time Complexity: O(log n)
Space Complexity: O(1)
--------------------------------------------------
*/

class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int i = 0;
        int j = arr.size() - 1;
        int first = -1;               // stores first occurrence index
        
        while(i <= j) {
            int mid = i + (j - i) / 2; // safe mid calculation
            
            if(arr[mid] == k) 
            {
                first = mid;          // update answer
                j = mid - 1;          // search left half
            }
            else if(arr[mid] > k)
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        
        return first;                 // return first occurrence
    }
};
