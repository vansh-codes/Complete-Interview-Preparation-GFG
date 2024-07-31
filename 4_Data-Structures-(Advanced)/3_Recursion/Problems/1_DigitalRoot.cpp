//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Complete this function
    int digitalRoot(int A)
    {
        // Your code here
        int temp = A % 9;
        return temp == 0 ? 9 : temp;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin >> T; // taking testcases
    while (T--)
    {
        int n;
        cin >> n; // taking number n

        // calling digitalRoot() function
        Solution obj;
        cout << obj.digitalRoot(n) << endl;
    }
    return 0;
}
// } Driver Code Ends