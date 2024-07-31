//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        bool isPrime(int N)
        {
            //Your code here
        
        // Check if N is less than or equal to 1
        if (N <= 1) {
            return false;
        }
    
        // Check if N is 2 or 3
        if (N <= 3) {
            return true;
        }
    
        // Check for even number and multiples of 3
        if (N % 2 == 0 || N % 3 == 0) {
            return false;
        }
    
        // Check for other numbers up to the square root of N
        for (int i = 5; i * i <= N; i += 6) {
            if (N % i == 0 || N % (i + 2) == 0) {
                return false;
            }
        }
    
        return true;
            
        }

};


//{ Driver Code Starts.

int main()
{
    int T; //testcases
    cin>>T; //input testcases
    while(T--) //while testcase have not been exhausted
    {
        int N;
        cin>>N; //input n
        Solution ob;
        if(ob.isPrime(N)) 
            cout<<"Yes";
        else
            cout<<"No";
            
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends