/*
-----------------------------------------
Problem: Reverse an Array
Platform: GeeksforGeeks
Approach: Two-pointer technique
Time Complexity: O(n)
Space Complexity: O(1)
-----------------------------------------
*/

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        
        int i = 0;                  // pointer to start of array
        int l = arr.size() - 1;     // pointer to end of array
        
        // Swap elements until pointers meet
        while(i < l) {
            int temp = arr[i];      // store current element
            arr[i] = arr[l];        // swap with last element
            arr[l] = temp;
            
            i++;                    // move start pointer forward
            l--;                    // move end pointer backward
        }
    }
};
