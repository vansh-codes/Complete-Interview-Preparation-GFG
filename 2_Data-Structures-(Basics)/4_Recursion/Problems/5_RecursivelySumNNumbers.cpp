//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int recursiveSum(int N)
    {
        //Your code here
        //Recursively sum from 1 to N and return
        if(N<=1) return N;
        return N+recursiveSum(N-1);
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    Solution ob;
	    cout<<ob.recursiveSum(N)<<endl;
	}
	return 0;
}
// } Driver Code Ends