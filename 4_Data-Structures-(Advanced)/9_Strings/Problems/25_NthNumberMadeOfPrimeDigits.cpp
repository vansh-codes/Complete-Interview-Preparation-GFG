//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find nth number made of only prime digits.
    int primeDigits(int n)
    {
        queue<long long int> q;
        q.push(2);
        q.push(3);
        q.push(5);
        q.push(7);

        while (!q.empty())
        {
            auto z = q.front();
            q.pop();
            n--;
            if (n == 0)
                return (z);
            q.push(z * 10 + 2);
            q.push(z * 10 + 3);
            q.push(z * 10 + 5);
            q.push(z * 10 + 7);
        }
        return (-1);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    // All the above tasks are preprocessing, now you can run testcases
    // and then print the values accordingly
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.primeDigits(n) << "\n";
    }
}

// } Driver Code Ends