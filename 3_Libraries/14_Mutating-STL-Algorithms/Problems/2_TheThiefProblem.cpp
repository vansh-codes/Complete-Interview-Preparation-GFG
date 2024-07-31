//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int getMaxVal(vector<int> arr, int n, int k)
    {
        //code here
        sort(arr.begin(), arr.end(), greater<int>());
    
        // Sum the first k elements
        int maxVal = 0;
        for (int i = 0; i < k; ++i)
        {
            maxVal += arr[i];
        }
        
        return maxVal;
    }
};

//{ Driver Code Starts.
int main() {
    
		int t;
		cin>>t;
		while(t--)
		{
		    //Creating a new vector 
		    vector<int> arr;
		    
		    //taking elements count
		    int n;
		    cin>>n;
		    
		    //adding elements to the vector
		    for(int i=0;i<n;i++)
		        {int x;
		        cin>>x;
		        arr.push_back(x);}
		    
		    //taking k 
		    int k;
		    cin>>k;
		    Solution ob;
		    //calling getMaxVal() method 
		    //and printing the result
		    cout<<ob.getMaxVal(arr,n,k)<<endl;
        }
}
// } Driver Code Ends