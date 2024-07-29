//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    long long int maximum_sum(vector<long long int>& v) {
        int n = v.size();
        long long int res = v[0];
        unordered_map<long long int, pair<int, int>> mp;
        vector<long long int> prefix_sum(n + 1, 0);
        
        for (int i = 0; i < n; ++i) {
            prefix_sum[i + 1] = prefix_sum[i] + v[i];
            if (mp.find(v[i]) == mp.end()) {
                mp[v[i]] = {i, i};
            } else {
                mp[v[i]].second = i;
            }
        }
        
        for (auto it = mp.begin(); it!= mp.end(); ++it) {
            int start = it->second.first;
            int end = it->second.second;
            long long int sum = prefix_sum[end + 1] - prefix_sum[start];
            res = max(res, sum);
        }
        
        return res;
    }
};

//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    vector<long long int>v(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    Solution ob;
	    long long int max_sum=ob.maximum_sum(v);
	    cout<<max_sum<<endl;
	}
	return 0;
}

// } Driver Code Ends