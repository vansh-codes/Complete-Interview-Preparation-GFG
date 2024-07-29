//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

vector<string> login_system(vector<string> v)
{
    unordered_map<string, int> mp;
    vector<string> res;
    
    for (string s : v) {
        if (mp.find(s) == mp.end()) {
            res.push_back(s);
            mp[s] = 1;
        } else {
            string temp = s + to_string(mp[s]);
            res.push_back(temp);
            mp[s]++;
        }
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
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string k;
            cin>>k;
            v.push_back(k);
        }
        vector<string>ans=login_system(v);
        for(auto i:ans)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends