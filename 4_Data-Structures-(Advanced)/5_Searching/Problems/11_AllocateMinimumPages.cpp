//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to find minimum number of pages.
    bool isPossible(int arr[], int n, int m, int curr_min) {
        int studentsRequired = 1;
        int curr_sum = 0;
    
        for (int i = 0; i < n; i++) {
            if (arr[i] > curr_min) {
                return false;
            }
            
            if (curr_sum + arr[i] > curr_min) {
                studentsRequired++;
                curr_sum = arr[i];
                
                if (studentsRequired > m) {
                    return false;
                }
            } else {
                curr_sum += arr[i];
            }
        }
        return true;
    }
    
    long long findPages(int n, int arr[], int m) {
        if (n < m) {
            return -1;
        }
    
        int sum = std::accumulate(arr, arr + n, 0);
        int max_page = *std::max_element(arr, arr + n);
    
        int low = max_page, high = sum;
        int result = INT_MAX;
    
        while (low <= high) {
            int mid = (low + high) / 2;
    
            if (isPossible(arr, n, m, mid)) {
                result = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        int m;
        cin >> m;
        Solution ob;
        cout << ob.findPages(n, A, m) << endl;
    }
    return 0;
}

// } Driver Code Ends