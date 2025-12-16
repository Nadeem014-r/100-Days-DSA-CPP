/*
    🔍 Linear Search in Array

    Linear Search checks each element of the array one by one
    until the required element is found or the array ends.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

class Solution {
  public:
   
    int search(vector<int>& arr, int x) {
        
        // Loop through the array from index 0 to last index
        for(int i = 0; i < arr.size(); i++)
        {
            // Check if current element is equal to x(element to find)
            if(arr[i] == x)
            {
                // If found, return the index of the element
                return i;
            }
        }
        
        // If element x is not found in the array, return -1
        return -1;
    }
};
