//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find lexicographic rank of a string.
    int findRank(string S)
    {
        // Your code here
        int n = S.length();
        int fact[n + 1];
        fact[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            fact[i] = (fact[i - 1] * i) % 1000000007;
        }

        int rank = 1;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (S[i] > S[j])
                {
                    count++;
                }
            }
            rank = (rank + count * fact[n - i - 1]) % 1000000007;
        }

        return rank;
    }
};

//{ Driver Code Starts.

int main()
{
    string S;
    int t;
    cin >> t;
    while (t--)
    {

        cin >> S;
        Solution obj;
        cout << obj.findRank(S) << endl;
    }
}

// } Driver Code Ends