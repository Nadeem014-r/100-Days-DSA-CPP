// Day 1: Sum of Array Elements
// Problem Link: https://www.geeksforgeeks.org/problems/sum-of-array/1
// Platform: GeeksforGeeks
class Solution {
  public:
    // Function to return sum of elements of array
    int arraySum(vector<int>& arr) {
        
        int sum=0;
        
        for(int i=0;i<=arr.size()-1;i++)
        {
            sum=sum+arr[i];
        }
        
        return sum;
    }
};
