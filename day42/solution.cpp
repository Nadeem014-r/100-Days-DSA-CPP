/*
--------------------------------------------------
Day 42 – Left Rotate Array by D Positions
Problem: Rotate an Array
Platform: GeeksforGeeks

Approach:
- Performed LEFT rotation using an auxiliary array
- Used modulo arithmetic to compute new indices
- Copied rotated elements back to the original array

Rotation Type:
- LEFT rotation by D positions

Time Complexity: O(n)
Space Complexity: O(n)
--------------------------------------------------
*/


class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        vector<int>arr2(n);
        
        
        for(int i=0;i<n;i++)
        {
            arr2[i]=arr[(i+d)%n];
        }
        
        for(int i=0;i<n;i++)
        {
            arr[i]=arr2[i];
        }
    }
};
