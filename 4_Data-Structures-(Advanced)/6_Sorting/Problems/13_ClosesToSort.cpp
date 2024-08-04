//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution{
  public:

    // arr[]: input array
    // n: size of array
    // x: element to find index
    //Function to find index of element x in the array if it is present.
    int closer(int arr[],int n, int x)
    {
        //Your code here
        int low = 0, high = n - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // Check if the middle element is the target element
        if (arr[mid] == x) return mid;
        
        // Check if the element before the middle element is the target
        if (mid > low && arr[mid - 1] == x) return mid - 1;
        
        // Check if the element after the middle element is the target
        if (mid < high && arr[mid + 1] == x) return mid + 1;
        
        // Adjust the search range
        if (arr[mid] < x) {
            low = mid + 2; // Move the low pointer to mid + 2
        } else {
            high = mid - 2; // Move the high pointer to mid - 2
        }
    }
    
    return -1; // Element not found

    }
};


//{ Driver Code Starts.

int main() {
    
    cin.tie(NULL);
    
	int t;
	cin >> t;
	
	while(t--){
	  
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    int x;
	    cin >> x;
	    Solution obj;
	    int res = obj.closer(arr,n,x);
	    
	    cout << res << endl;
	}
	
	return 0;
}
// } Driver Code Ends