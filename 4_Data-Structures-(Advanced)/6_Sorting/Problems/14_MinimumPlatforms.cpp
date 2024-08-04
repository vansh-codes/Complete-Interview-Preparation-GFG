//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	// Sort arrival and departure arrays
        sort(arr, arr + n);
        sort(dep, dep + n);
        
        // Initialize pointers and maximum platforms needed
        int i = 0, j = 0;
        int maxPlatforms = 0;
        int currentPlatforms = 0;
        
        // Traverse through sorted arrays to find minimum platforms
        while (i < n && j < n) {
            if (arr[i] <= dep[j]) {
                currentPlatforms++; // New train arrives
                i++;
            } else {
                currentPlatforms--; // Train departs
                j++;
            }
            // Update maximum platforms needed
            maxPlatforms = max(maxPlatforms, currentPlatforms);
        }
        
        return maxPlatforms;
    }
};



//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends