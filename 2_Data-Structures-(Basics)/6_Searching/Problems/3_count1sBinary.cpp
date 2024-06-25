//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    {
        
        // Your code here
        int l = 0;
        int h = N-1;
        int count = 0;
        if(arr[l]==0) return 0;
        if(arr[h]==1) return N;
        while(l<=h){
            int mid = l + (h-l)/2;
            // if(arr[mid]==1 && arr[mid+1]==0){
            if(arr[mid]==0 && arr[mid-1]==1){
                count=mid;
                break;
            } 
            else if(arr[mid]==0) 
                h = mid-1;
            else if(arr[mid]==1)
                l = mid+1;
                // h = mid-1;//
        }
        return count;
        
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
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
            
        Solution ob;
        cout <<ob.countOnes(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends