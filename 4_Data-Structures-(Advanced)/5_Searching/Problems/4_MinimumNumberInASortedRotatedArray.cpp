//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // If the array is not rotated at all
        if (high < low) return arr[0];
    
        // If there is only one element left
        if (high == low) return arr[low];
    
        // Find the mid element
        int mid = low + (high - low) / 2;
    
        // Check if mid+1 is the minimum element
        if (mid < high && arr[mid + 1] < arr[mid])
            return arr[mid + 1];
    
        // Check if mid itself is the minimum element
        if (mid > low && arr[mid] < arr[mid - 1])
            return arr[mid];
    
        // Decide whether we need to go to the left half or the right half
        if (arr[high] > arr[mid])
            return minNumber(arr, low, mid - 1);
        else
            return minNumber(arr, mid + 1, high);
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
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}
// } Driver Code Ends