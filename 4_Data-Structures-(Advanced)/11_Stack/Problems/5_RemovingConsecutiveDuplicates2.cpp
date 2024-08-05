//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to remove pair of duplicates from given string using Stack.
    string removePair(string str)
    {
        stack<char> st;

        for (char c : str)
        {
            if (!st.empty() && st.top() == c)
            {
                st.pop(); // Remove the pair
            }
            else
            {
                st.push(c); // Push to stack if no pair found
            }
        }

        string result;
        while (!st.empty())
        {
            result = st.top() + result;
            st.pop();
        }

        if (result.empty())
        {
            return "Empty String";
        }
        else
        {
            return result;
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
        string s;
        cin >> s;
        Solution obj;
        string ans = obj.removePair(s);
        if (ans == "")
            cout << "Empty String" << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
// } Driver Code Ends