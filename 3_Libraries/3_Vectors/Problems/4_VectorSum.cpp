//{ Driver Code Starts
//Initial Template for C++

// Find sum of the vector
#include <bits/stdc++.h>

using namespace std; 


// } Driver Code Ends
//User function Template for C++

//Complete the function
int SumMe(vector<int> arr, int n){

	 // Your code here
    // Use accumulate function
    return accumulate(arr.begin(), arr.end(), 0);
}


//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;

    while(t--){

    int n;
    cin>>n;
    
    vector<int> arr(n);
    for(int i=0; i<n;++i){
        cin>>arr[i];
    }

    cout<<SumMe(arr, n)<<endl;

    }

	return 0; 
} 

// } Driver Code Ends