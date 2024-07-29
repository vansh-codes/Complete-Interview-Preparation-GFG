//{ Driver Code Starts
//Initial Template for C++

// Find duplicate from an array using unordered_set 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

//Complete the function
void DuplicateMe(int arr[], int n) 
{ 

    // Your code here
   // Use 2 sets
    unordered_set<int> seen;
    unordered_set<int> duplicates;

    for (int i = 0; i < n; ++i) {
        if (seen.find(arr[i]) != seen.end()) {
            duplicates.insert(arr[i]);
        } else {
            seen.insert(arr[i]);
        }
    }

    for (auto it = duplicates.begin(); it != duplicates.end(); ++it) {
        cout << *it << " ";
    }
}


//{ Driver Code Starts. 

int main() 
{ 
  int t;
  cin>>t;
  
  while(t--){

    int n;
    cin>>n;

	int arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }  

	DuplicateMe(arr, n);
	cout<<endl;
	
}
    return 0; 
} 

// } Driver Code Ends