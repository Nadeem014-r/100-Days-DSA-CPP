// Target Sum Combinations (Backtracking)
//
// Idea:
// Try all possible combinations by choosing
// to include or exclude each element.
//
// Key Points:
// - Elements can be reused
// - Reduce target when including
// - Backtrack after exploring a choice
//
// Key Learning:
// Index control decides whether reuse is allowed.

class Solution {
  public:
    void solve(int idx, vector<int>& arr, int target,
               vector<int>& curr,
               vector<vector<int>>& ans) {

        // base cases
        if (target == 0) {
            ans.push_back(curr);
            return;
        }

        if (idx == arr.size() || target < 0)
            return;

        // include current element (reuse allowed)
        curr.push_back(arr[idx]);
        solve(idx, arr, target - arr[idx], curr, ans);
        curr.pop_back(); // backtrack

        // exclude current element
        solve(idx + 1, arr, target, curr, ans);
    }

    vector<vector<int>> targetSumComb(vector<int> &arr, int target) {
        vector<vector<int>> ans;
        vector<int> curr;

        solve(0, arr, target, curr, ans);
        return ans;
    }
};
