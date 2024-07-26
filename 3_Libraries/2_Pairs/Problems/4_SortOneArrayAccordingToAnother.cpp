//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void sortArray(int a[], char b[], int n){
    
    // code here
        
        // Create a vector of pairs to store (a[i], b[i])
    vector<pair<int, char>> pairs;
    
    for (int i = 0; i < n; ++i) {
        pairs.push_back(make_pair(a[i], b[i]));
    }
    
    // Sort the vector based on the first element of the pairs (a[i])
    sort(pairs.begin(), pairs.end());
    
    // Output the characters (b[i]) in the sorted order
    for (int i = 0; i < n; ++i) {
        cout << pairs[i].second;
        if (i < n - 1) {
            cout << " ";
        }
    }
    
    
}


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        
        char b[n];
        for(int i = 0;i < n; i++){
            cin>>b[i];
        }
        
        sortArray(a, b, n);
        
        
        cout<<"\n";
    }
}
// } Driver Code Ends