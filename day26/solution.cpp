/*
-----------------------------------------
Problem: Second Largest Element in Array
Platform: GeeksforGeeks
Approach:
1. First pass to find the maximum element
2. Second pass to find the largest element
   that is NOT equal to maximum
Time Complexity: O(n)
Space Complexity: O(1)
-----------------------------------------
*/


class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        
        int max = INT_MIN;   // stores largest element
        int max2 = INT_MIN;  // stores second largest element
        
        // First loop: find maximum element
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
        
        // Second loop: find second largest element
        for(int i = 0; i < arr.size(); i++) {
            // arr[i] != max ensures we skip the largest element
            if(arr[i] > max2 && arr[i] != max) {
                max2 = arr[i];
            }
        }
        
        // If no second largest element exists eg(5,5,5);
        if(max2 == INT_MIN)
            return -1;
            
        return max2;
    }
};



