//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


vector<int> greater_height(vector<int>v) {
    int n = v.size();
    vector<int> res(n);
    stack<int> s;
    
    for (int i = 0; i < n; ++i) {
        while (!s.empty() && v[s.top()] <= v[i]) {
            s.pop();
        }
        if (s.empty()) {
            res[i] = -1;
        } else {
            res[i] = v[s.top()];
        }
        s.push(i);
    }
    
    return res;
}



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
        vector<int> result=greater_height(v);
        for(auto i:result)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends