//{ Driver Code Starts
//Initial Template for C++


// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to return the maximum water that can be stored.
    int maxWater(int height[], int n) {
        if (n < 2) return 0;  // If less than 2 buildings, no water can be trapped
        
        int max_water = 0;
        int left = 0;
        int right = n - 1;
    
        while (left < right) {
            int current_water = min(height[left], height[right]) * (right - left - 1);
            max_water = max(max_water, current_water);
            
            // Move the pointer pointing to the shorter building
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return max_water;
    }

};



//{ Driver Code Starts.

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        Solution ob;
        cout<<(ob.maxWater(height, n))<<endl;
    }

	 
} 


// } Driver Code Ends