//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Your code here
    int max_toys(int arr[], int n, int k)
    {
        //Your code here
        // Sort the array of toy prices
    sort(arr, arr + n);
    
    int toysCount = 0;
    int current_money = k;
    
    // Iterate through sorted prices
    for (int i = 0; i < n; ++i) {
        if (current_money >= arr[i]) {
            current_money -= arr[i];
            toysCount++;
        } else {
            break; // No need to continue if we can't afford the next toy
        }
    }
    
    return toysCount;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int k;
        cin>>k;
        Solution ob;
        cout<< ob.max_toys(arr, n, k)<<endl;
    }
    return 0;
}




// } Driver Code Ends