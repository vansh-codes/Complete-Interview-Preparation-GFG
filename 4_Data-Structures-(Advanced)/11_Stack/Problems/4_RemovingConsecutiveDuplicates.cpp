//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to remove consecutive duplicates from given string using Stack.
    string removeConsecutiveDuplicates(string s)
    {
        stack<char> st;
        string result;

        for (char c : s)
        {
            if (st.empty() || c != st.top())
            {
                st.push(c);
            }
        }

        // Building the result string from stack
        while (!st.empty())
        {
            result = st.top() + result;
            st.pop();
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
        string s;
        cin >> s;
        Solution obj;
        cout << obj.removeConsecutiveDuplicates(s) << endl;
    }

    return 0;
}
// } Driver Code Ends