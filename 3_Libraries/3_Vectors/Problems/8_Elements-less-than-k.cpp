//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

vector<int> list_less_than_k(vector<int> a,int n,int k)
{
    // Your code here
    //Return a vector with elements less than k
    vector<int> result;
    for (int i = 0; i < n; ++i) {
        if (a[i] < k) {
            result.push_back(a[i]);
        }
    }
    return result;
}


//{ Driver Code Starts.

// Driver code
int main()
{
    int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    // Declaring vector 
	    vector<int> a(N);
	        
	    // Taking vector element input
	    for(int i = 0;i<N;i++){
	        cin>>a[i];
	    }
	    
	    int k;
	    cin>>k;
	    
	    vector<int>result = list_less_than_k(a,N,k);
	    
	    for(auto i:result)
	    {
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}



//Position this line where user code will be pasted.
// } Driver Code Ends