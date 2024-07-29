//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int unique_substring(string str)
    {
        // Your code here
        int n = str.length();
        unordered_set<string> s;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                s.insert(str.substr(i, j - i + 1));
            }
        }
        return s.size();
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t-->0){
        string str;
        cin>>str;
        Solution ob;
        int ans= ob.unique_substring(str);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends