/*
    Problem: Find Minimum and Maximum in an Array
    Platform: GeeksforGeeks / DSA Practice
    Approach: Linear Traversal
    Time Complexity: O(n)
    Space Complexity: O(1)

    Description:
    - Traverse the array once.
    - Keep track of the smallest and largest elements.
    - Return both values as a vector.
*/



class Solution {
  public:
    // Function to find minimum and maximum elements in an array
    vector<int> getMinMax(vector<int> &arr) {
        
        // Initialize minimum with the largest possible integer value
        int minimum = INT_MAX;
        
        // Initialize maximum with the smallest possible integer value
        int maximum = INT_MIN;
        
        // Traverse through the array
        for (int i = 0; i < arr.size(); i++) {
            
            // Update minimum if current element is smaller
            if (arr[i] < minimum) {
                minimum = arr[i];
            }
            
            // Update maximum if current element is greater
            if (arr[i] > maximum) {
                maximum = arr[i];
            }
        }
        
        // Return minimum and maximum as a vector
        return {minimum, maximum};
    }
};
