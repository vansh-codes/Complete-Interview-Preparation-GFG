//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int GCD(int a,int b)
    {
        //Your code here
        if(b==0){
            return a;
        }
        return GCD(b, a%b);
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int a,b;
	    cin>>a>>b;
	    Solution ob;
	    cout<<ob.GCD(a,b)<<endl;
	}
	return 0;
}
// } Driver Code Ends