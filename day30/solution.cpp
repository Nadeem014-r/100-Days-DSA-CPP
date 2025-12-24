/*
-----------------------------------------
Problem: Check if Array is Perfect (Palindrome)
Platform: GeeksforGeeks
Approach: Two-pointer technique
Time Complexity: O(n)
Space Complexity: O(1)
-----------------------------------------
*/

class Solution {
  public:
    bool isPerfect(vector<int> &arr) {
        
        int i = 0;                    // pointer to start of array
        int j = arr.size() - 1;       // pointer to end of array
        
        // Compare elements from both ends
        while(i < j) {
            if(arr[i] != arr[j]) {
                return false;         // mismatch found → not perfect
            }
            i++;                      // move start pointer forward
            j--;                      // move end pointer backward
        }
        
        return true;                  // array is perfect (palindrome)
    }
};
