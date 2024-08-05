//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find maximum of minimums of every window size.

    vector<int> maxOfMin(int arr[], int n)
    {
        vector<int> result(n, 0);
        stack<int> left, right;
        vector<int> next_smaller(n, n), prev_smaller(n, -1);

        // Step 1: Compute next smaller element using stack
        for (int i = 0; i < n; ++i)
        {
            while (!left.empty() && arr[left.top()] >= arr[i])
            {
                left.pop();
            }
            next_smaller[i] = left.empty() ? -1 : left.top();
            left.push(i);
        }

        // Step 2: Compute previous smaller element using stack
        for (int i = n - 1; i >= 0; --i)
        {
            while (!right.empty() && arr[right.top()] >= arr[i])
            {
                right.pop();
            }
            prev_smaller[i] = right.empty() ? n : right.top();
            right.push(i);
        }

        // Step 3: Calculate maximum of minimums for each window size
        for (int i = 0; i < n; ++i)
        {
            int window_size = prev_smaller[i] - next_smaller[i] - 1;
            result[window_size - 1] = max(result[window_size - 1], arr[i]);
        }

        // Step 4: Fill the result array with maximum of minimums
        for (int i = n - 2; i >= 0; --i)
        {
            result[i] = max(result[i], result[i + 1]);
        }

        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        vector<int> res = ob.maxOfMin(a, n);
        for (int i : res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends