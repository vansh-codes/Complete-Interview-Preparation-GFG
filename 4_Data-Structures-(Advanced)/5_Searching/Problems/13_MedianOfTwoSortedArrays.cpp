//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to find the median of the two arrays when they get merged.
    int findMedian(int arr[], int n, int brr[], int m) {
        int i = 0, j = 0, k = 0;
        vector<int> merged;
        
        while (i < n && j < m) {
            if (arr[i] <= brr[j]) {
                merged.push_back(arr[i]);
                i++;
            } else {
                merged.push_back(brr[j]);
                j++;
            }
        }
        
        while (i < n) {
            merged.push_back(arr[i]);
            i++;
        }
        
        while (j < m) {
            merged.push_back(brr[j]);
            j++;
        }
        
        int total = n + m;
        int medianIndex = total / 2;
        
        if (total % 2 == 1) {
            return merged[medianIndex]; // median for odd number of elements
        } else {
            return (merged[medianIndex - 1] + merged[medianIndex]) / 2; // floor of average for even number of elements
        }
    }
};


//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    Solution obj;
	    if(n < m)
	        cout << obj.findMedian(arr, n, brr, m) << endl;
	   else
	        cout << obj.findMedian(brr, m, arr, n) << endl;
	    
	}

}
// } Driver Code Ends