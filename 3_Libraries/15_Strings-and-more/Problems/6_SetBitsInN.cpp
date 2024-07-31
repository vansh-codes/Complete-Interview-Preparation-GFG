//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:    
    int setBitCount(int n) {
        // code here
        return __builtin_popcount(n);
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        Solution ob;
        
        cout <<ob.setBitCount(n) << endl;
    }
}



// } Driver Code Ends