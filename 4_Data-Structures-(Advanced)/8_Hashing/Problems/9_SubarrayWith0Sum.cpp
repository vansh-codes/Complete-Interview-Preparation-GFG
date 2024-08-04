//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Complete this function
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        // Your code here
        unordered_set<int> s;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum == 0 || s.find(sum) != s.end())
            {
                return true;
            }
            s.insert(sum);
        }
        return false;
    }
};

//{ Driver Code Starts.
// Driver code
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
            cin >> arr[i];
        Solution obj;
        if (obj.subArrayExists(arr, n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
// } Driver Code Ends