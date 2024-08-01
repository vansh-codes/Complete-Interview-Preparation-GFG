//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
// Function to find element in sorted array

int leftIndex(int N, int arr[], int X) {
    int left = 0, right = N - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // If we find the element, update the result and move to the left part
        if (arr[mid] == X) {
            result = mid;
            right = mid - 1;
        }
        // If the middle element is greater than X, move to the left part
        else if (arr[mid] > X) {
            right = mid - 1;
        }
        // If the middle element is less than X, move to the right part
        else {
            left = mid + 1;
        }
    }
    
    return result;
}




//{ Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    int elemntToSearch;
	    cin >> elemntToSearch;
	    
	    cout << leftIndex(sizeOfArray, arr, elemntToSearch) << endl;
	}
	
	return 0;
}
// } Driver Code Ends