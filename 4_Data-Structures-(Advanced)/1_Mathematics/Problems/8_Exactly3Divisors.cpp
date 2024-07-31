//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int exactly3Divisors(int N)
    {
        //Your code here
        int count = 0;
        int limit = sqrt(N);
    
        // Create a boolean array "prime[0..limit]" and initialize
        // all entries as true. A value in prime[i] will
        // finally be false if i is Not a prime, true if i is a prime.
        std::vector<bool> prime(limit + 1, true);
    
        prime[0] = prime[1] = false; // 0 and 1 are not prime numbers.
    
        for (int p = 2; p * p <= limit; p++) {
            // If prime[p] is not changed, then it is a prime.
            if (prime[p]) {
                // Update all multiples of p to not prime.
                for (int i = p * p; i <= limit; i += p) {
                    prime[i] = false;
                }
            }
        }
    
        // Now check for squares of all prime numbers up to sqrt(N)
        for (int p = 2; p <= limit; p++) {
            if (prime[p] && (p * p <= N)) {
                count++;
            }
        }
    
        return count;
    }
};

//{ Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}
// } Driver Code Ends