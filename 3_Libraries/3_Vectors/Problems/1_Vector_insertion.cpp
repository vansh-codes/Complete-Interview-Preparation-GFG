//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*
arr: insert the given array elements to vector
n: size of array
*/
vector<int> fillVector(int arr[], int n)
{
    // your code here
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[i] = arr[i];
    }
    return ans;
}



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
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        
        vector<int> res = fillVector(arr,n);
        for(auto x : res)
            cout << x << " ";
        cout << endl;
    }
}


// } Driver Code Ends