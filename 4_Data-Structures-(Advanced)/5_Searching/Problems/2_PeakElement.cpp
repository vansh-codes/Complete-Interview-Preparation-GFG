//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function should return the index of any
   peak element present in the array */ 

// arr: input array
// n: size of array
class Solution
{
    public:
    int peakElement(int arr[], int n) {
        int left = 0, right = n - 1;
    
        while (left <= right) {
            int mid = left + (right - left) / 2;
    
            // Check if the middle element is a peak
            if ((mid == 0 || arr[mid] >= arr[mid - 1]) && 
                (mid == n - 1 || arr[mid] >= arr[mid + 1])) {
                return mid;
            }
            // If the middle element is less than its left neighbor, then a peak must be in the left half
            else if (mid > 0 && arr[mid] < arr[mid - 1]) {
                right = mid - 1;
            }
            // If the middle element is less than its right neighbor, then a peak must be in the right half
            else {
                left = mid + 1;
            }
        }
    
        return -1;  // This line will never be reached if input is valid
    }

};


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n], tmp[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			tmp[i] = a[i];
		}
		bool f=0;
		Solution ob;
		
		int A = ob. peakElement(tmp,n);
		
		if(A<0 and A>=n)
		    cout<<0<<endl;
		else
		{
    		if(n==1 and A==0)
    		    f=1;
    		else if(A==0 and a[0]>=a[1])
    		    f=1;
    		else if(A==n-1 and a[n-1]>=a[n-2])
    		    f=1;
    		else if(a[A]>=a[A+1] and a[A]>= a[A-1])
    		    f=1;
    		else
    		    f=0;
    		cout<<f<<endl;
		}
		
	}

	return 0;
}
// } Driver Code Ends