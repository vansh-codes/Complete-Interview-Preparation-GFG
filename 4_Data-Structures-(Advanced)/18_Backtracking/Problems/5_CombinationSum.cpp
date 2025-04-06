//User function template for C++

class Solution {
  public:
    //Function to return a list of indexes denoting the required 
    //combinations whose sum is equal to given number.
    void findComb(int ind, int target, vector<int> &A, vector<vector<int>> &ans, vector<int> &ds) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        
        for (int i = ind; i < A.size(); i++) {
            if (A[i] <= target && (i == ind || A[i] != A[i - 1])) {
                ds.push_back(A[i]);
                findComb(i, target - A[i], A, ans, ds);
                ds.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum(vector<int> &A, int B) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(A.begin(), A.end()); // Sort the input array to ensure non-descending order
        findComb(0, B, A, ans, ds);
        return ans;
    }
};