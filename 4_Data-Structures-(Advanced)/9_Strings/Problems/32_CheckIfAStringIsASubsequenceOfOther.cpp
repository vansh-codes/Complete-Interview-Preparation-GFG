//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to check if a string is subsequence of other string.
    bool isSubSequence(string A, string B)
    {
        // code here
        int m = A.length();
        int n = B.length();

        int i = 0, j = 0;
        while (i < m && j < n)
        {
            if (A[i] == B[j])
            {
                i++;
            }
            j++;
        }

        return i == m;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string A, B;
        cin >> A >> B;
        Solution ob;
        bool ans = ob.isSubSequence(A, B);
        if (ans == true)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends