//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//vector<int> v: containing N elements
// Find and return vector of elements containing
// prime number at prime index

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;  // 2 is prime
    if (num % 2 == 0) return false;  // even numbers > 2 are not prime
    
    // Check for odd divisors up to square root of num
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}


vector<int> prime_at_prime(vector<int>v)
{
    // Your code here
    vector<int> result;
    for (int i = 1; i <= v.size(); ++i) {
        // Check if the index i (1-indexed) is prime and v[i-1] is prime
        if (isPrime(i) && isPrime(v[i-1])) {
            result.push_back(v[i-1]);
        }
    }
    return result;
}


//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int m;
	        cin>>m;
	        v.push_back(m);
	    }
	    vector<int>result=prime_at_prime(v);
	    for(auto i:result)
	    {
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

// } Driver Code Ends