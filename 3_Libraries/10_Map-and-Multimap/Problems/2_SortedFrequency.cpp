//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    void freqSorted(int arr[], int n)
    {
       //Your code here
       map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        for (auto it = mp.begin(); it!= mp.end(); it++) {
            cout << "(" << it->first << "," << it->second << ") ";
        }
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
        Solution ob;
        ob.freqSorted(arr,n);
        
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends