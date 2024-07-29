//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


//Complete this function
string Sorted_Characters(string str)
{
    // Create a string to store the sorted characters
    string sorted_str = str;
    
    // Sort the characters in the string
    sort(sorted_str.begin(), sorted_str.end());
    
    // Remove duplicates
    string result;
    for (char c : sorted_str) {
        if (result.find(c) == string::npos) {
            result += c;
        }
    }
    
    return result;
}


//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	    string str;
	    cin>>str;
	    
	    string result;
	    result=Sorted_Characters(str);
	    cout<<result;
	    
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends