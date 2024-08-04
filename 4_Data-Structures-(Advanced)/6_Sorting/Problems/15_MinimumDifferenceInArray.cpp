//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Function to find minimum difference between any pair of elements in an array.
    int MinimumDifference(int arr[], int n)
    {
        //code here
        // Step 1: Sort the array
        sort(arr, arr + n);
        
        // Step 2: Initialize minimum difference
        int minDiff = INT_MAX;
        
        // Step 3: Traverse and find minimum difference
        for (int i = 0; i < n - 1; ++i) {
            int diff = arr[i+1] - arr[i];
            if (diff < minDiff) {
                minDiff = diff;
            }
        }
        
        // Step 4: Return the minimum difference found
        return minDiff;
    }
};

//{ Driver Code Starts.
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n; cin>>n;
	    int arr[n]; 
	    for(int i = 0; i < n; i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int diff = ob.MinimumDifference(arr, n);
	    cout << diff << endl;
	}
	return 0;
}
// } Driver Code Ends