//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete this function
bool isArr2PermutationOfArr1(int arr1[], int arr2[], int n) {
    vector<int> v1(arr1, arr1 + n);
    vector<int> v2(arr2, arr2 + n);
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    return v1 == v2;
}

//{ Driver Code Starts.


int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr1[n];
        
        for(int i=0;i<n;i++)
        cin>>arr1[i];
        
        int arr2[n];
        
        for(int i=0;i<n;i++)
        cin>>arr2[i];
        
        
        cout<<isArr2PermutationOfArr1(arr1,arr2,n);
        cout<<endl;
    }
    
	return 0;
}
// } Driver Code Ends