//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s)
    {
        stack<char> st;
        string postfix = "";
        unordered_map<char, int> precedence = {{'^', 3}, {'*', 2}, {'/', 2}, {'+', 1}, {'-', 1}};

        for (char c : s)
        {
            if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9')
            {
                postfix += c;
            }
            else if (c == '(')
            {
                st.push(c);
            }
            else if (c == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    postfix += st.top();
                    st.pop();
                }
                if (!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
            }
            else
            {
                while (!st.empty() && st.top() != '(' && precedence[c] <= precedence[st.top()])
                {
                    postfix += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        while (!st.empty())
        {
            postfix += st.top();
            st.pop();
        }

        return postfix;
    }
};

//{ Driver Code Starts.
// Driver program to test above functions
int main()
{
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--)
    {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends