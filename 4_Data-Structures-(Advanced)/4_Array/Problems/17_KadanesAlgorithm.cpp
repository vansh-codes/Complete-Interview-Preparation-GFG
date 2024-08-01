//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        int n = arr.size();
        if (n == 0) return 0; // Edge case: empty array
        
        long long current_max = arr[0];
        long long global_max = arr[0];
        
        for (int i = 1; i < n; ++i) {
            current_max = max((long long)arr[i], current_max + arr[i]);
            if (current_max > global_max) {
                global_max = current_max;
            }
        }
        
        return global_max;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl;
    }
}
// } Driver Code Ends