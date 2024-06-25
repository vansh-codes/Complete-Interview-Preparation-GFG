//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int factorial(int n)
    {
        //Your code here
        if(n==1 || n==0) return 1;
        return n*factorial(n-1);
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
	    cout<<ob.factorial(N)<<endl;
	}
	return 0;
}
// } Driver Code Ends