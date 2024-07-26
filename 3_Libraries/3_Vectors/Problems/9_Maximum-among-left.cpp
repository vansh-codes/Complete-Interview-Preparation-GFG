//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

vector<int> maximum_from_left(vector<int>v)
{
    // Your code here
    vector<int> result;
    int max_so_far = v[0];

    for (int i = 1; i < v.size(); ++i) {
        if (v[i] > max_so_far) {
            result.push_back(i);
            max_so_far = v[i];
        }
    }
    return result;
}

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	   
	   vector<int>v;
	   int i;
	   for(i=0;i<n;i++)
	   {
	       int k;
	       cin>>k;
	       v.push_back(k);
	   }
	   vector<int> result=maximum_from_left(v);
	   for(auto i:result)
	   {
	       cout<<i<<" ";
	   }
	   cout<<endl;
	}
	return 0;
}
// } Driver Code Ends