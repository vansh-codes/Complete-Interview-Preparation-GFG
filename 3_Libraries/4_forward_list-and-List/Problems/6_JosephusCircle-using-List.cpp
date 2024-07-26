//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int josephus(int n, int k){
    // code here
       int safePosition = 0;
        for (int i = 2; i <= n; ++i) {
            safePosition = (safePosition + k) % i;
        }
        return safePosition + 1; // Convert to 1-based index
    
}

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    
    while(t-- > 0){
        int n,k;
        cin>>n>>k;
        
        cout<<josephus(n,k)<<"\n";
    }
    
    return 0;
}
// } Driver Code Ends