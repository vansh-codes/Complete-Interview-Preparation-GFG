//{ Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
    // Function to implement extended Euclidean Algorithm
    int gcdExtended(int a, int b, int* x, int* y) {
        // Base Case
        if (a == 0) {
            *x = 0, *y = 1;
            return b;
        }
        
        int x1, y1; // To store results of recursive call
        int gcd = gcdExtended(b % a, a, &x1, &y1);
        
        // Update x and y using results of recursive call
        *x = y1 - (b / a) * x1;
        *y = x1;
        
        return gcd;
    }
    
    //Complete this function
    int modInverse(int a, int m)
    {
        //Your code here
        int x, y;
        int g = gcdExtended(a, m, &x, &y);
        
        // If gcd is not 1, then inverse doesn't exist
        if (g != 1 || g ==0 ) return -1;
        
        // m is added to handle negative x
        int res = (x % m + m) % m;
        return (res==0)?-1:res;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	
	//taking testcases
	cin>>T;
	while(T--){
		int a,m;
		
		//taking input a and m
		cin>>a>>m;
		Solution ob;
		//calling function modInverse()
		cout << ob.modInverse(a, m)<<endl;
	}
    return 0;
}
// } Driver Code Ends