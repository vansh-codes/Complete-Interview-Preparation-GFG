//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        int left = 0, right = n - 1;

        // Phase 1: Find the potential celebrity candidate
        while (left < right)
        {
            if (M[left][right] == 1)
                left++; // left cannot be a celebrity
            else
                right--; // right cannot be a celebrity
        }

        // Phase 2: Validate the potential celebrity candidate
        int celebrity_candidate = left;
        for (int i = 0; i < n; ++i)
        {
            if (i != celebrity_candidate)
            {
                // Check if celebrity candidate knows anyone or is known by anyone
                if (M[celebrity_candidate][i] == 1 || M[i][celebrity_candidate] == 0)
                {
                    return -1; // Not a celebrity
                }
            }
        }

        return celebrity_candidate;
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
        vector<vector<int>> M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends