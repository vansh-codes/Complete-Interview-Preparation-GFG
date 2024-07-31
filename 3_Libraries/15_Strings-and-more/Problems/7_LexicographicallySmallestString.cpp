//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

string lexi_string(string s) {
    string temp = s;
    string min_str = s;
    
    for (int i = 0; i < s.length(); i++) {
        rotate(temp.begin(), temp.begin() + 1, temp.end());
        if (temp < min_str) {
            min_str = temp;
        }
    }
    
    return min_str;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        string ans= lexi_string(s);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends