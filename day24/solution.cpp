/*
 * Problem: Find the largest element in an array
 * Author: Nadeem
 * Date: 18-12-2025
 * Description:
 *   This function iterates through the array and returns
 *   the maximum element present in it.
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */


class Solution {
  public:
    // Function to return the largest element in the array
    int largest(vector<int> &arr) {

        // Initialize largest with the minimum possible integer value
        // This helps handle arrays with all negative numbers
        int largest = INT_MIN;
        
        // Traverse the array
        for(int i = 0; i < arr.size(); i++)
        {
            // If current element is greater than the stored largest value
            if(arr[i] > largest) {
                // Update largest with the current element
                largest = arr[i];
            }
        }
        
        // Return the largest element found in the array
        return largest;
    }
};
