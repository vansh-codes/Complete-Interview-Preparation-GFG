//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // arr[]: input array
    // n: size of the array
    // x: element for which you need to return the count
    int greaterThanX(int arr[],int n,int x)
    {
        // your code here
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>x){
                count++;
            }
        }
        return count;
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
	    int arr[N];
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    int x;
	    cin>>x;
	    Solution ob;
	    cout<<ob.greaterThanX(arr,N,x);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends