//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


//Complete the function
void deleteFromArray(int arr[], int n, int index){
    
  //Your code here
  //1 2 3 4 5 -> //2 3 4 5 0
  for(int i=index+1;i<n;i++){
      arr[i-1] = arr[i];
  }
  arr[n-1] = 0;
}


//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
    	int n;
    	int index;
    	cin >> n;
    	cin >> index;
    	
    	int arr[n];
    	
    	for(int i = 0;i<n;i++){
    	    arr[i] = i+1;
    	}
    	
    	deleteFromArray(arr, n, index);
    
    	for(int i = 0;i<n;i++)
    	    cout << arr[i] << " ";
    	    
    	  cout<<endl;
	}
	return 0;
}
// } Driver Code Ends