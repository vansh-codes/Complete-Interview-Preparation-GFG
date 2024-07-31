//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minDiff(int n, int arr[], int m) {
    sort(arr, arr + n);
    int res = arr[n - 1] - arr[0];
    for (int i = 0; i <= n - m; i++) {
        res = min(res, arr[i + m - 1] - arr[i]);
    }
    return res;
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int m;
        cin >> m;

        cout << minDiff(n, arr, m) << endl;
    }
    return 0;
}
// } Driver Code Ends