//{ Driver Code Starts
//Initial Template for C++
#include<iostream> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int arr[], int n) {
        if (n == 0) return 0;
        
        int max_len = 1;  // Initialize with at least 1, as a single element is always alternating
        int curr_len = 1;
        
        for (int i = 1; i < n; ++i) {
            if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)) {
                curr_len++;
                max_len = max(max_len, curr_len);
            } else {
                curr_len = 1;
            }
        }
        
        return max_len;
    }

};

//{ Driver Code Starts.
int main() 
{ 
    int testcases;
    //testcases
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        //size of array
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        //inserting elements in the array
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        //calling function
        cout  << ob.maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
} 

// } Driver Code Ends