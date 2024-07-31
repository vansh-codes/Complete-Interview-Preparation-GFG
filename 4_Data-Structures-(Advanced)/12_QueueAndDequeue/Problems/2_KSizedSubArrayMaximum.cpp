//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int *arr, int n, int k) {
        vector<int> result;
        deque<int> dq;
    
        for (int i = 0; i < n; ++i) {
            // Remove elements from deque which are out of the current window
            if (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
    
            // Maintain decreasing order in deque
            while (!dq.empty() && arr[dq.back()] <= arr[i])
                dq.pop_back();
    
            // Add current element at the back of the deque
            dq.push_back(i);
    
            // Start adding results when window size K is reached
            if (i >= k - 1)
                result.push_back(arr[dq.front()]);
        }
    
        return result;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends