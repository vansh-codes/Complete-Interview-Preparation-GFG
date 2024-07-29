//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

int vMin(vector<int>v, int n)
{
    //Your code here
    return *min_element(v.begin(), v.end());
}

//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   vector<int>v;
	   for(int i=0;i<n;i++)
	   {
	       int x;
	       cin>>x;
	       v.push_back(x);
	   }
	   
	   cout<<vMin(v,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends