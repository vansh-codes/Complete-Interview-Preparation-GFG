//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int upBound(vector<int> V, int k)
{
    auto it = upper_bound(V.begin(), V.end(), k);
    if(it == V.end())
        return -1;
    else
        return *it;
}

int lowBound(vector<int> V, int k)
{
    auto it = lower_bound(V.begin(), V.end(), k);
  
        return *it;
}


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k;
        
        vector<int> V(n);
        for(int i = 0; i < n; i++)
        {
            
            cin>>x;
            V[i] = x;
        }
        
        cout << upBound(V, k) << " " << lowBound(V, k)<<endl;;
        
    }
    return 0;
}


// } Driver Code Ends