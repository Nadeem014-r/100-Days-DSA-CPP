// Subsets of an Array (Backtracking)
//
// Idea:
// At each index, we have two choices:
// 1) Include the current element
// 2) Exclude the current element
//
// Base Case:
// When index reaches end of array,
// store the current subset.
//
// Key Learning:
// Backtracking works by making a choice,
// exploring it, then undoing the choice.
class Solution {
  public:
    void solve(int idx, vector<int>& arr,
               vector<int>& curr,
               vector<vector<int>>& ans) {
        // base case
        if (idx == arr.size()) {
            ans.push_back(curr);
            return;
        }

        // include current element
        curr.push_back(arr[idx]);
        solve(idx + 1, arr, curr, ans);

        // exclude current element
        curr.pop_back();
        solve(idx + 1, arr, curr, ans);
    }

    vector<vector<int>> subsets(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> curr;

        solve(0, arr, curr, ans);
        return ans;
    }
};
