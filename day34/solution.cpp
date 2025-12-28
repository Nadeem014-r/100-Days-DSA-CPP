/*
--------------------------------------------------
Day 34 – Optimized Solution (Modification of Day 33)
Problem: Count Frequency of an Element in Sorted Array
Platform: GeeksforGeeks

Modification:
- Day 33 solution used linear traversal (O(n))
- Optimized on Day 34 using Binary Search
- Reduced time complexity from O(n) to O(log n)

Approach:
- Find first and last occurrence using binary search
- Frequency = lastIndex - firstIndex + 1

Time Complexity: O(log n)
Space Complexity: O(1)
--------------------------------------------------
*/

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int n = arr.size();
        
        int first = -1, last = -1;
        
        int i = 0, j = n - 1;

        // Find first occurrence
        
        while(i <= j) 
        {
            int mid = i + (j - i) / 2;
            
            if(arr[mid] == target) 
            {
                first = mid;
                j = mid - 1;   
            }
            else if(arr[mid] < target) 
            {
                i = mid + 1;
            }
            else 
            {
                j = mid - 1;
            }
        }

       // If target not found
        if(first == -1) 
        
        return 0;   

    
        i = 0; 
        j = n - 1;

        // Find last occurrence
        
        while(i <= j) 
        {
            int mid = i + (j - i) / 2;
            if(arr[mid] == target)
            {
                last = mid;
                i = mid + 1;   
            }
            else if(arr[mid] < target) 
            {
                i = mid + 1;
            }
            else 
            {
                j = mid - 1;
            }
        }

        return last - first + 1;    
    }
};
