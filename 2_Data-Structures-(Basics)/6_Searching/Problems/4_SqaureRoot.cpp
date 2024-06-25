//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int n) 
    {
        // Your code goes here   
        long long low = 1;
        long long high = n/2;
        long long result = 0;
        if(n==0 || n==1) return n;

        while(low<=high){
            long long mid = low + (high-low)/2;
            if(mid*mid==n) return mid;
            else if(mid*mid<n) {
                result = mid;
                low = mid + 1;
            }
            else{
                high = mid-1;
            }
        }
        return result;  
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends