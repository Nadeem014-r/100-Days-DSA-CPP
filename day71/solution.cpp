// Permutations of Distinct Elements (Backtracking)
// Generate all possible permutations of the elements in the array.
// Idea:
// Fix one position at a time and generate
// permutations for the remaining elements.
//
// At each index:
// - swap current element with all possible choices
// - recurse for next index
// - swap back to restore state
//
// Key Learning:
// Backtracking = choose → explore → undo.

class Solution {
  public:
    void solve(int idx, vector<int>& arr, vector<vector<int>>& ans) {
        // base case
        if (idx == arr.size()) {
            ans.push_back(arr);
            return;
        }

        for (int i = idx; i < arr.size(); i++) {
            swap(arr[idx], arr[i]);     // choose...
            solve(idx + 1, arr, ans);   // explore...
            swap(arr[idx], arr[i]);     // backtrack...
        }
    }

    vector<vector<int>> permuteDist(vector<int>& arr) {
        vector<vector<int>> ans;
        solve(0, arr, ans);
        return ans;
    }
};
