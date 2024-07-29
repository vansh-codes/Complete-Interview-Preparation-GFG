//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int profit(vector<int>V)
    {
        // Your code here
        int n = V.size();
    int ans = 0;
    stack<int> s;
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() < V[i]) {
            s.pop();
        }
        if (s.empty()) {
            ans += V[i];
        } else {
            ans += s.top() - V[i];
        }
        s.push(V[i]);
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            v.push_back(k);
        }
        Solution ob;
        int ans=ob.profit(v);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends