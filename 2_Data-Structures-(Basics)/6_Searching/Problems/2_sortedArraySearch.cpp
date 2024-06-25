//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int X) 
    { 
    
       // Your code here
        int l = 0;
        int h = N-1;
        int res = -1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(arr[mid]==X){
                res=mid; 
                break;
            } 
            else if(arr[mid]<X) 
                l = mid+1;
            else 
                h = mid-1;
        }
        
        if(res>=0) res = 1;
        // else res = -1;
        return res;
       
    }
};

//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends