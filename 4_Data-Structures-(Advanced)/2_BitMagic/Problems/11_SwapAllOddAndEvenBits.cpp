//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
        // Your code here
        unsigned int evenBits = n & 0xAAAAAAAA; // Get all even bits
        unsigned int oddBits = n & 0x55555555;  // Get all odd bits

        evenBits >>= 1; // Right shift even bits
        oddBits <<= 1;  // Left shift odd bits

        return evenBits | oddBits; // Combine even and odd bits
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin >> t; // testcases
    while (t--)
    {
        unsigned int n;
        cin >> n; // input n

        Solution ob;
        // calling swapBits() method
        cout << ob.swapBits(n) << endl;
    }
    return 0;
}
// } Driver Code Ends