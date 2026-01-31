// Subset Sum Problem (Recursion)
//
// Idea:
// At each index, choose whether to
// include or exclude the current element.
//
// Base Cases:
// If sum becomes 0 → subset found.
// If all elements are used → return false.
//
// Key Learning:
// This problem applies the subsets pattern
// with an added condition on the sum.

class Solution {
  public:
    bool solve(int idx, vector<int>& arr, int sum) {
        // base cases
        if (sum == 0)
            return true;          // subset found......

        if (idx == arr.size())
            return false;         // no elements left.....

        // include current element (if possible)......
        if (arr[idx] <= sum) {
            if (solve(idx + 1, arr, sum - arr[idx]))
                return true;
        }

        // exclude current element......
        return solve(idx + 1, arr, sum);
    }

    bool isSubsetSum(vector<int>& arr, int sum) {
        return solve(0, arr, sum);
    }
};
