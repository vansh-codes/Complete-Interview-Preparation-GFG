//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


//Complete this function
vector<int> vFill(vector<int> v) {
    fill(v.begin(), v.end(), 0);
    return v;
}


//{ Driver Code Starts.


int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        
        vector<int> ans=vFill(v);
        
        for(auto x:ans)
        cout<<x<<" ";
        
        cout<<endl;
    }
    
	return 0;
}
// } Driver Code Ends