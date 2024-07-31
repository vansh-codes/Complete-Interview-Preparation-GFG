//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

char extraChar(string s1, string s2)
{
    
    //code here
    char result = 0;
    for (char c : s1) {
        result ^= c;
    }
    for (char c : s2) {
        result ^= c;
    }
    return result;
    
}

//{ Driver Code Starts.
    
int main() {
	
        int t;
        cin>>t;
        while(t--) {
            string s1,s2;
            cin>>s1;
            cin>>s2;
            cout<<extraChar(s1, s2)<<endl;
        }
}
// } Driver Code Ends