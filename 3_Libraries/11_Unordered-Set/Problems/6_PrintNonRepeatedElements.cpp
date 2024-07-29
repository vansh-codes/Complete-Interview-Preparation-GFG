//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: input array
    // n: size of array
    //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
        //Your code here
        unordered_map<int, int> freq;
        vector<int> res;
        
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        
        for (int i = 0; i < n; i++) {
            if (freq[arr[i]] == 1) {
                res.push_back(arr[i]);
            }
        }
        
        return res;    
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
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    vector<int> v;
	    Solution obj;
	    v = obj.printNonRepeated(arr,n);
	    
	    for(int i=0;i<v.size();i++)  
	        cout<<v[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}


// } Driver Code Ends