//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int> st;

        for (char c : S)
        {
            if (c >= '0' && c <= '9')
            {
                st.push(c - '0');
            }
            else
            {
                int operand2 = st.top();
                st.pop();
                int operand1 = st.top();
                st.pop();

                if (c == '+')
                {
                    st.push(operand1 + operand2);
                }
                else if (c == '-')
                {
                    st.push(operand1 - operand2);
                }
                else if (c == '*')
                {
                    st.push(operand1 * operand2);
                }
                else if (c == '/')
                {
                    st.push(operand1 / operand2);
                }
            }
        }

        return st.top();
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
        string S;
        cin >> S;
        Solution obj;

        cout << obj.evaluatePostfix(S) << endl;
    }
    return 0;
}

// } Driver Code Ends