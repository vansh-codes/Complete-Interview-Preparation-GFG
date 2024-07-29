//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


//Complete this function
int vMax(vector<int> v, int n)
{
    return *max_element(v.begin(), v.end());
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
	   
	   cout<<vMax(v,n)<<endl;
	}
	return 0;
}


// } Driver Code Ends