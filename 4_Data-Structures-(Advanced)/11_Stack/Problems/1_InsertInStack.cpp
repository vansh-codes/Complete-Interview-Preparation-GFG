//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    stack<int> insertIntoStack(int n, int arr[])
    {
        // Your code here
        stack<int> s;
        for (int i = 0; i < n; ++i)
        {
            s.push(arr[i]);
        }
        return s;
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        stack<int> s;
        Solution obj;
        s = obj.insertIntoStack(n, arr);

        while (!s.empty())
        {
            cout << s.top() << " ";
            s.pop();
        }

        cout << endl;
    }
    return 0;
}
// } Driver Code Ends