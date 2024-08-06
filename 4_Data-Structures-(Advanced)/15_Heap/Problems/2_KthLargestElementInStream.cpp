//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to print kth largest element for each element in the stream.
    void kthLargest(int arr[], int n, int k)
    {
        // your code here
        priority_queue<int, vector<int>, greater<int>> pq;
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            pq.push(arr[i]);
            while (pq.size() > k)
                pq.pop();
            if (pq.size() < k)
                ans[i] = -1;
            else
                ans[i] = pq.top();
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> k >> n;

        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        ob.kthLargest(arr, n, k);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends