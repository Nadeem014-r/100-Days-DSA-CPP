/*
-----------------------------------------
Problem: Check if Array is Sorted
Platform: GeeksforGeeks
Approach: Iterative comparison of adjacent elements
Time Complexity: O(n)
Space Complexity: O(1)
-----------------------------------------
*/

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // Traverse the array and compare adjacent elements
        for(int i = 0; i < arr.size() - 1; i++) 
        {
            if(arr[i] > arr[i + 1])
            {
              
                return false;   // array is not sorted
              
            }
        }
      
        return true;            // array is sorted
    }
};
