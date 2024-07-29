//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<long, long> findRepeating(long *arr, int n){
        //code here
        pair<long, long> res = {-1, -1};
        unordered_map<long, long> freq;
        
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        
        for (auto it = freq.begin(); it != freq.end(); it++) {
            if (it->second > 1) {
                res.first = it->first;
                res.second = it->second;
                break;
            }
        }
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    long arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    Solution obj;
	    pair<long, long> ans = obj.findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}
// } Driver Code Ends