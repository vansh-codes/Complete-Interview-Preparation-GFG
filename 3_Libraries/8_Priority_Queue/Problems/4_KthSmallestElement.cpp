//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
        // Your code here
        priority_queue<int, vector<int>, greater<int>> pq;
    
    // Push all elements into the priority queue
    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
    }
    
    // Pop k-1 elements from the priority queue
    for (int i = 0; i < k - 1; i++) {
        pq.pop();
    }
    
    // The top element of the priority queue is the kth smallest element
    return pq.top();
    }
};


//{ Driver Code Starts.
int main(){
	
	int t;
	cin >> t;
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    
	    for(int i = 0; i<n; ++i)
	        cin>>arr[i];
	        
	    Solution ob;
	    cout << ob.kthSmallest(arr, n, k) << endl;
	    
	}
	return 0;
}
// } Driver Code Ends