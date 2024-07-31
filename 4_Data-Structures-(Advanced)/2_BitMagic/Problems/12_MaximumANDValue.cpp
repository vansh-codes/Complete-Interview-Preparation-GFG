//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function for finding maximum AND value.
    int maxAND(int a[], int n)
    {
        int r{}, s{sizeof(int) * 8};
        while (s--)
        {
            const int t{1 << s | r};
            if (count_if(a, a + n, [&](int i)
                { 
                    return (i & t) == t; 
                }) > 1)
            r = t;
        }
        return r;
    }
};

//{ Driver Code Starts.

// Driver function
int main()
{
    int t;
    cin >> t; // testcases
    while (t--)
    {
        int n;
        cin >> n; // input n
        int arr[n + 5], i;

        // inserting elements
        for (i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        // calling maxAND() function
        cout << obj.maxAND(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends