//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete this function
bool sExists(set<int> s, int x) {
    return s.count(x) > 0;
}

//{ Driver Code Starts.



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   set<int>s;
	   for(int i=0;i<n;i++)
	   {
	       int x;
	       cin>>x;
	       s.insert(x);
	   }
	   
	   int x;
	   cin>>x;
	   
	   cout<<sExists(s,x)<<endl;
	   
	   
	}
	return 0;
}
// } Driver Code Ends