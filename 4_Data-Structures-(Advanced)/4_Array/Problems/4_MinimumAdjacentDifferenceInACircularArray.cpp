//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n) {
        // Initialize the minimum difference with a large value
        int min_diff = INT_MAX;
        
        // Traverse the array and calculate the absolute differences
        for (int i = 0; i < n; ++i) {
            int diff = abs(arr[i] - arr[(i + 1) % n]);
            if (diff < min_diff) {
                min_diff = diff;
            }
        }
        
        return min_diff;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin>>t; //Input testcases
    
    while(t--) //While testcases exist
    {
        int n;
        cin>>n; //Input size of array
        
        int arr[n]; //Array of size n
        
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i]; //input elements of array
        }
        Solution ob;
        
        cout << ob.minAdjDiff(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends