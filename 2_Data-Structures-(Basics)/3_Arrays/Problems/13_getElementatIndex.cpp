//{ Driver Code Starts
//Initial Template for C++
#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete this function
int getByIndex(int arr[],int n,int i)
{
    //Your code here
    if(i>=n){
        return -1;
    }
    return arr[i];
}


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
	    
	    int i;
	    cin>>i;
	    
	    
	    cout<<getByIndex(arr,n,i)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends