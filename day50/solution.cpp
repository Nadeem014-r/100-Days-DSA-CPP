/*
--------------------------------------------------
Day 50 – Recursion Basics
Problem: Reverse an Array using Recursion
Platform: GeeksforGeeks

Approach:
- Used recursion to swap elements from both ends
- Defined a base case to stop recursion
- Reduced problem size by moving indices inward

Learning Focus:
- Understanding base case and recursive calls
- Visualizing recursion using call stack

Time Complexity: O(n)
Space Complexity: O(n) (recursion stack)
--------------------------------------------------
*/
class Solution {
  public:
   void fxn(int i,int l,vector<int> &arr)
    {
        if(i>=l)
        {
            return;
        }
      
        int temp=arr[i];
        arr[i]=arr[l];
        arr[l]=temp;
      
        fxn(i+1,l-1,arr);
    }
    void reverseArray(vector<int> &arr) {
        // code here
    int k=arr.size()-1;
       fxn(0,k,arr);
        
    }
};
